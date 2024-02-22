// 6] Write a program to find the index of a substring of a string

#include <stdio.h>
#include<string.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main()
{
  char string[100], sub_string[100];
  input_string(string, sub_string);
  int index = sub_str_index(string, sub_string);
  output(string, sub_string, index);
  return 0;
}

void input_string(char *a, char *b)
{
  printf("Enter the main string: ");
  scanf("%s", a);
  printf("Enter the substring: ");
  scanf("%s", b);
}
int sub_str_index(char *string, char *substring)
{
  int len_str = strlen(string);
  int len_sub = strlen(substring);

  for (int i = 0; i <= len_str - len_sub; i++)
  {
    int j=0;
    for (j = 0; j < len_sub; j++)
    {
      if (string[i + j] != substring[j])
      {
        break;
      }
    }
    if (j == len_sub)
    {
      return i;
    }
  }

  return -1;
}

void output(char *string, char *substring, int index)
{
  printf("The index of '%s' in '%s' is  :  %d\n", substring, string, index);
}