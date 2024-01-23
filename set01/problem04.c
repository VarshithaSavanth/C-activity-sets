// 4. Write a C program to add two numbers using **pass by reference**

#include<stdio.h>

void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
  int a, b, sum;
  input(&a, &b);
  add(a, b, &sum);
  output(a, b, sum);
  return 0;
}

void input(int *a, int *b)
{
  printf("Enter the value of a : \n");
  scanf("%d", a);
  printf("Enter the value of b : \n");
  scanf("%d", b);
}

void add(int a, int b, int *sum)
{
  *sum = a + b;
}

void output(int a, int b, int sum)
{
  printf("The sum is : %d", sum);
}