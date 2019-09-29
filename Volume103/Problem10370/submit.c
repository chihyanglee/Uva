#include <stdio.h>
int scores[1005];

int main()
{
  int set;
  int count;
  scanf("%d", &set);
  while (set--)
  {
    scanf("%d", &count);
    int i, total = 0, aboveAverage = 0;
    double average = 0.0;
    for (i = 0; i < count; i++)
    {
      scanf("%d", &scores[i]);
      total += scores[i];
    }
    average = total * 1.0 / count;
    for (i = 0; i < count; i++)
    {
      if (scores[i] > average)
      {
        aboveAverage++;
      }
    }
    printf("%.3f%%\n", aboveAverage * 1.0 / count * 100);
  }
  return 0;
}