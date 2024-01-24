// 2] Write a C program to find the sum of _n_ complex numbers

#include<stdio.h>

struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() 
{
    int n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    Complex sum = add_n_complex(n, c);
    output(n, c, sum);
    return 0;
}
int get_n()
{
    int n;
    printf("Enter the number of complex numbers : ");
    scanf("%d", &n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real part : ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part : ");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter Complex Number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) 
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n, Complex c[n]) 
{
    Complex sum;
    for (int i = 0; i < n; i++) 
    {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) 
{
    for (int i = 0; i < n; i++) {
        printf("%.0f+%.0fi + ", c[i].real, c[i].imaginary);
    }
		printf(" is %.0f+%.0fi\n", result.real, result.imaginary);
}