/*
  https://uva.onlinejudge.org/external/103/10370.pdf
  10370 Above Average
  It is said that 90% of frosh expect to be above
  average in their class. You are to provide a
  reality check.

  Input
  The first line of standard input contains an integer C, the number of test cases. C data
  sets follow. Each data set begins with an integer, N, the number of people in the class
  (1 ≤ N ≤ 1000). N integers follow, separated by spaces or newlines, each giving the
  final grade (an integer between 0 and 100) of
  a student in the class.

  Output
  For each case you are to output a line giving the percentage of students whose grade is above average,
  rounded to 3 decimal places.

  Sample Input
  5
  5 50 50 70 80 100
  7 100 95 90 80 70 60 50
  3 70 90 80
  3 70 90 81
  9 100 99 98 97 96 95 94 93 91

  Sample Output
  40.000%
  57.143%
  33.333%
  66.667%
  55.556%
*/
#include <stdio.h>

double getAverage(int, int *);
double getAboveAveragePercentage(double, int, int *);
int main()
{
  int count;
  double average, percentage;

  // case 1:
  count = 5, average = percentage = 0.0;
  int score1[] = {50, 50, 70, 80, 100};
  average = getAverage(count, score1);
  printf("Average: %.3f\n", average);
  percentage = getAboveAveragePercentage(average, count, score1);
  printf("Percentage: %.3f%%\n", percentage);

  // case 2:
  count = 7, average = percentage = 0.0;
  int score2[] = {100, 95, 90, 80, 70, 60, 50};
  average = getAverage(count, score2);
  printf("Average: %.3f\n", average);
  percentage = getAboveAveragePercentage(average, count, score2);
  printf("Percentage: %.3f%%\n", percentage);

  // case 3:
  count = 3, average = percentage = 0.0;
  int score3[] = {70, 90, 80};
  average = getAverage(count, score3);
  printf("Average: %.3f\n", average);
  percentage = getAboveAveragePercentage(average, count, score3);
  printf("Percentage: %.3f%%\n", percentage);

  // case 4:
  count = 3, average = percentage = 0.0;
  int score4[] = {70, 90, 81};
  average = getAverage(count, score4);
  printf("Average: %.3f\n", average);
  percentage = getAboveAveragePercentage(average, count, score4);
  printf("Percentage: %.3f%%\n", percentage);

  // case 5:
  count = 9, average = percentage = 0.0;
  int score5[] = {100, 99, 98, 97, 96, 95, 94, 93, 91};
  average = getAverage(count, score5);
  printf("Average: %.3f\n", average);
  percentage = getAboveAveragePercentage(average, count, score5);
  printf("Percentage: %.3f%%\n", percentage);
  return 0;
}

double getAverage(int count, int *scores)
{
  int i;
  int sum = 0;
  for (i = 0; i < count; i++)
  {
    sum += *(scores + i);
  }
  return sum * 1.0 / count;
}
double getAboveAveragePercentage(double average, int count, int *scores)
{
  int i;
  int aboveCount = 0;
  for (i = 0; i < count; i++)
  {
    if (*(scores + i) > average)
    {
      aboveCount++;
    }
  }
  return aboveCount * 1.0 / count * 100;
}