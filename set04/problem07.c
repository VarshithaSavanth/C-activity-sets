// 7] Write a program to add two fractions

#include <stdio.h>

typedef struct
{
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
    int a, b;
    Fraction f1, f2, f3, sum;
    f1 = input_fraction();
    f2 = input_fraction();
    find_gcd(a, b);
    sum = add_fractions(f1, f2);
    output(f1, f2, sum);
    return 0;
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

int find_gcd(int a, int b)
{
    int gcd;
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
    int a, b;
    sum.num = (f1.num * f2.den) + (f2.num * f1.den);
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}