// 6] Write a program to find the index of a substring of a string


#include <stdio.h>

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
  printf("Enter the string value : ");
  scanf("%s", a);
  printf("Enter the substring value : ");
  scanf("%s", b);
}

int sub_str_index(char *string, char *substring)
{
  int i, j;
  for (i = 0; string[i] != '\0'; i++)
  {
    int index = 1;
    for (j = 0; substring[j] != '\0'; j++)
    {
      if (string[i + j] != substring[j])
      {
        index = 0;
        break;
      }
    }
    if (index)
    {
      return i;
    }
  }
  return 1;
}

void output(char *string, char *substring, int index)
{
  if (index == 1)
  {
    printf("Substring '%s' not found in '%s'\n", substring, string);
  }
  else
  {
    printf("The index of '%s' in '%s' is %d\n", substring, string, index);
  }
}


