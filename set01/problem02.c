//2. Write a C program to add two numbers.

#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter the value of a : \n");
  scanf("%d", &a);
  printf("Enter the value of b : \n");
  scanf("%d", &b);
  sum = a + b;
  printf("The sum is : %d\n", sum);
  return 0;
}