// 4] Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)

#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
  int n = input_degree();
  float a[n];
  input_coefficients(n, a);
  float x = input_x();
  float result = evaluate_polynomial(n, a, x);
  output(n, a, x, result);
  return 0;
}

int input_degree()
{
  int n;
  printf("Enter the highest degree of the ploynomial : ");
  scanf("%d", &n);
  return n;
}

void input_coefficients(int n, float a[n])
{
  int i = 0;
  for (i = 0; i <= n; i++)
  {
    printf("Enter the coefficients : ");
    scanf("%f", &a[i]);
  }
}

float input_x()
{
  int x;
  printf("Enter the x value : ");
  scanf("%d", &x);
  return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
  float result = 0;
  for (int i = 0; i <= n; i++)
  {
    result = result * x + a[i];
  }
  return result;
}

void output(int n, float a[n], float x, float result)
{
  printf("H(%d, %.2f, %d) = %.2f", n, x, n, a[0]);
  for (int i = 1; i <= n; ++i)
  {
    printf(" + %.2f * %.2f to the power of %d", a[i], x, i);
  }
  printf(" = %.6f\n", result);
}