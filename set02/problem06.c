// 06] Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char str[100], reverse_str[100];
  input_string(str);
  str_reverse(str, reverse_str);
  output(str, reverse_str);
}

void input_string(char *a)
{
  printf("Enter the string value : ");
  scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
  int len;
  for (len = 0; str[len] != '\0'; len++);
  for (int i = len - 1, j = 0; i >= 0; i--, j++)
  {
    rev_str[j] = str[i];
  }
  rev_str[len] = '\0';
}

void output(char *a, char *reverse_a)
{
  printf("String before reversed : %s\n", a);
  printf("Reversed String : %s\n", reverse_a);
}
