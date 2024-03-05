// 8] Write a program to add n fractions

#include <stdio.h>

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
    int n; Fraction sum;
    n = input_n();
    Fraction f[n];
    input_n_fractions(n, f);
    sum = add_n_fractions(n, f);
    output(n, f, sum);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of fraction : ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator value of the fraction : ");
    scanf("%d", &f.num);
    printf("Enter the denominator value of the fraction : ");
    scanf("%d", &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n])
{
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the values of Fraction %d\n",i+1);
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
    int gcd=1;
    for (int i = 2; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num = (f1.num * f2.den) + (f2.num * f1.den);
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    return sum;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = f[0];
    for(int i=1 ; i<n ; i++)
    {
        sum = add_fractions(sum,f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum)
{
    
        printf("The Sum Of Fraction's -->  ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d/%d", f[i].num, f[i].den);
        if(i<n-1)
        {
            printf(" + ");
        }
    }
    printf(" :  %d/%d\n",sum.num,sum.den);
}