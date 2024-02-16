//02] Write a program to find if a triangle is scalene.
//A triangle is scalene if all the three sides of the triangle are not equal to one another

#include<stdio.h>
#include<math.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a = input_side();
  int b = input_side();
  int c = input_side();
  int isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}

int input_side()
{
  int x;
  printf("Enter a number : ");
  scanf("%d", &x);
  return x;
}

int check_scalene(int a, int b, int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
void output(int a, int b, int c, int isscalene)
{
  if (isscalene==0)
  {
    printf("The triangle with sides %d, %d and %d is scalene", a, b , c);
  }
  else if (isscalene==1)
  {
    printf("The triangle with sides %d, %d and %d is not scalene\n", a ,b ,c);
  }
}