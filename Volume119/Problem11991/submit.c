#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size, queryCount, i;
  while (2 == scanf("%d %d", &size, &queryCount))
  {
    int *array = (int *)malloc(sizeof(int) * size);
    for (i = 0; i < size; i++)
    {
      scanf("%d", array + i);
    }
    int nth, target, location, j, counter;
    for (i = 0; i < queryCount; i++)
    {
      counter = 0;
      scanf("%d %d", &nth, &target);
      for (j = 0; j < size; j++)
      {
        if (target == *(array + j))
        {
          counter++;
        }
        if (counter == nth)
        {
          printf("%d\n", j + 1);
          break;
        }
      }
      if (j == size)
      {
        printf("0\n");
      }
    }
  }
  return 0;
}