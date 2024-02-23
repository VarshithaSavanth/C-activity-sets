// 04] Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
  int n = input_array_size();
  int a[n];
  input_array(n, a);
  int sum = sum_composite_numbers(n, a);
  output(sum);
  return 0;
}

int input_array_size()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    printf("Enter the array values : ");
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[n])
{
  int sum = 0, i = 0, j = 0;
  for (i = 0; i < n; i++)
  {
    if (a[i] > 1)
    {
      for (j = 2; j <= a[i]/2 ; j++)
      {
        if (a[i] % j == 0)
        {
          sum = sum + a[i];
          break;
        }
      }
    }
  }
  return sum;
}

void output(int sum)
{
  printf("The sum is %d \n", sum);
}


