// 6] Write a C program to compare three numbers using **pass by reference**

#include<stdio.h>

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
  int a, b, c, largest;
  input(&a, &b, &c);
  compare(a, b, c, &largest);
  output(a, b, c, largest);
  return 0;
}

int input(int *a, int *b, int *c)
{
  printf("Enter the value of a : ");
  scanf("%d", a);
  printf("Enter the value of b : ");
  scanf("%d", b);
  printf("Enter the value of c : ");
  scanf("%d", c);
  return 0;
}
void compare(int a, int b, int c, int *largest)
{
  if (a>=b && a>=c)
  {
    *largest = a;
  }
  if (b>=a && b>=c)
  {
    *largest = b;
  }
  else
  {
    *largest = c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("The largest of %d, %d and %d is %d\n", a, b, c, largest);
}