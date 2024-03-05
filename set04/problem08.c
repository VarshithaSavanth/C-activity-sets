// 8] Write a program to add n fractions

#include<stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
  int n, a, b;
  Fraction f1, f2, sum;
  n = input_n();
  Fraction f[n];
  input_n_fractions(n,f);
  find_gcd(a, b);
  add_fractions(f1,f2)
}