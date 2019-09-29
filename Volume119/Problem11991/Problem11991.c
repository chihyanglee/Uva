/**
  https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=229&page=show_problem&problem=3142
  Given an array, your task is to find the k-th occurrence (from left to right) of an integer v. To make
  the problem more difficult (and interesting!), you’ll have to answer m such queries.

  Input
  There are several test cases. The first line of each test case contains two integers n, m (1 ≤ n, m ≤
  100, 000), the number of elements in the array, and the number of queries. The next line contains n
  positive integers not larger than 1,000,000. Each of the following m lines contains two integer k and v
  (1 ≤ k ≤ n, 1 ≤ v ≤ 1, 000, 000). The input is terminated by end-of-file (EOF).

  Output
  For each query, print the 1-based location of the occurrence. If there is no such element, output ‘0’
  instead.

  Sample Input
  8 4
  1 3 2 2 4 3 2 1
  1 3
  2 4
  3 2
  4 2

  Sample Output
  2
  0
  7
  0
 */
#include <stdio.h>
#include <stdlib.h>
#define NOT_FOUND 0
int *getArray(int);
int getLocation(int, int, int *, int);
int main()
{
  int size = 0, queryCount = 0, i;
  scanf("%d %d", &size, &queryCount);
  int *array = getArray(size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", (array + i));
  }
  int nth = 0, target = 0;
  for (i = 0; i < queryCount; i++)
  {
    scanf("%d %d", &nth, &target);
    printf("%d\n", getLocation(nth, target, array, size));
  }
  free(array);
  return 0;
}

int *getArray(int size)
{
  return (int *)malloc(sizeof(int) * size);
}

int getLocation(int nth, int target, int *array, int size)
{
  int i, count = 0;
  for (i = 0; i < size; i++)
  {
    if (*(array + i) == target)
    {
      count++;
    }
    if (count == nth)
    {
      return i + 1;
    }
  }
  return NOT_FOUND;
}