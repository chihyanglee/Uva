#include <stdio.h>

int algorithmCount(int, int *);
int main()
{
  int input1, input2, i;
  while ((scanf("%d %d", &input1, &input2)) == 2)
  {
    int count, max = 0;
    int bottom = input1 > input2 ? input2 : input1;
    int top = input1 > input2 ? input1 : input2;
    for (i = bottom; i <= top; i++)
    {
      count = 0;
      algorithmCount(i, &count);
      if (count > max)
      {
        max = count;
      }
    }
    printf("%d %d %d\n", input1, input2, max);
  }
  return 0;
}

int algorithmCount(int n, int *count)
{
  (*count)++;
  if (n == 1)
  {
    return n;
  }
  if (n % 2 == 1)
  {
    return algorithmCount(3 * n + 1, count);
  }
  return algorithmCount(n / 2, count);
}