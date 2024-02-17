//06] Write a program to reverse a string.

#include<stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char a[100], str[100], rev_str[100], reverse_a[100];
  input_string(a);
  str_reverse(str, rev_str);
  output(a, reverse_a);
}

void input_string(char *a)
{
  printf("Enter the string value : ");
  scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{
  char a = str;
  str = rev_str;
  int i=0;
  for (i=0 ; str[i]!='\0' ; i++)
  {

  }
}
void output(char *a, char *reverse_a)
{

}