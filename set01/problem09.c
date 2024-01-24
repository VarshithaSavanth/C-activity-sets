// 9] Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

#include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  float n = input();
  float sqrroot = square_root(n);
  output(n,sqrroot);
  return 0;
}

float input()
{
  float n;
  printf("Enter a number : ");
  scanf("%f", &n);
  return n;
}

float square_root(float n)
{
  float x_old = 1, x_new=n/2;
  float precession = 0.000001;
  while(fabs(x_new - x_old) >  precession)
  {
    x_old = x_new;
    x_new =  (x_old + n / x_old) / 2;
  }
  return x_new;
}
void output(float n, float sqrroot)
{
  printf("The square root is : %.2f", sqrroot);
}