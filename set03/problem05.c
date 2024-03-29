// 5] Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
  int n = input_array_size();
  int a[n];
  init_array(n, a);
  erotosthenes_sieve(n, a);
  output(n, a);
  return 0;
}

int input_array_size()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d", &n);
  return n;
}

void init_array(int n, int a[n])
{
  int i = 0;
  for (int i = 2; i <= n; i++)
  {
    a[i] = i;
  }
}

void erotosthenes_sieve(int n, int a[n])
{
  int i, j;
  for (i = 2; i <= n; i++)
  {
    for (j = i; j <= n; j = j + i)
    {
      printf("%d\n", j);
      a[j = j + i] = 0;
    }
  }
}

void output(int n, int a[n])
{

  int j;
  printf("Prime numbers : ");
  for (int i = 2; i < n; i++)
  {
    if (a[i] != 0)
    {
      printf("%d", a[i]);
      if (i < n - 1)
      {
        printf(", ");
      }
    }
  }
}