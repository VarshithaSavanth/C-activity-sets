// 1] Write a program to find sum of two fractions

#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
  int num1, den1, num2, den2, res_num, res_den;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &res_num, &res_den);
  output(num1, den1, num2, den2, res_num, res_den);
}

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator value for the 1st fraction : ");
  scanf("%d", num1);
  printf("Enter the denominator value for the 1st fraction : ");
  scanf("%d", den1);
  printf("Enter the numerator value for the 1st fraction : ");
  scanf("%d", num2);
  printf("Enter the denominator value for the 1st fraction : ");
  scanf("%d", den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
  int sum=0;
  *res_num = num1 * den2 + num2 * den1;
  *res_den = den1 * den2;
  for (int i=2 ; i<=*res_num && i<=*res_den ; i++)
  {
    if(*res_num % i == 0 && *res_den % i == 0)
    {
      *res_num /= i;
      *res_den /= i;
      break;
    }
  }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  printf("%d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}