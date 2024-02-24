// 6] Write a program to find the average of all the odd elements in an array

#include <stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
  int n = input_n();
  int a[n];
  input(n, a);
  float avg = odd_average(n, a);
  output(avg);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  return n;
}

void input(int n, int a[n])
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter the array elements : ");
    scanf("%d", &a[i]);
  }
}

float odd_average(int n, int a[n])
{
  int sum = 0, count = 0;
  for (int i=0 ; i<n ; i++)
  {
    if (a[i] % 2 != 0)
    {
      sum += a[i];
      count++;
    }
  }
  float avg = sum / count;
  return avg;
}

void output(float avg)
{
  printf("Average of all the odd elements is: %.2f\n", avg);
}