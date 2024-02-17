//05] Write a program to find GCD _(HCF)_ of two numbers.

#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a = input();
  int b = input();
  int gcd = find_gcd(a, b);
  output(a, b, gcd);
  return 0;
}

int input()
{
  int x;
  printf("Enter the value of a and b: ");
  scanf("%d", &x);
  return x;
}

int find_gcd(int a, int b)
{
  int i=0, gcd=0;
  for (i=1 ; i<=a && i<=b ; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      gcd = i;
    }
  }
  return gcd;
}

void output(int a, int b, int gcd)
{
  printf("GCD of %d and %d is :  %d\n",a, b, gcd);
}