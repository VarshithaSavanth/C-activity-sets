//03] Write a program find whether a number is a composite number
// A Composite number has more than 2 factors.

#include<stdio.h>
#include<math.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
  int n = input_number();
  int result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number()
{
  int n;
  printf("Enter the value of n : ");
  scanf("%d, &n");
  return 0;
}

int is_composite(int n)
{
  if (n % 1 && n % )
  {
    return 0;
  }
  else 
  {
    return 1;
  }
}
void output(int n, int result)
{
  if (result==0)
  {
    printf("%d is a composite number");
  }
  if (result==1)
  {
    printf("%d is not a composite number");
  }
}
