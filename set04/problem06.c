// 6] Write a program to count the number of words in a string using strtok (_string.h_)

#include<stdio.h>
#include<string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
  char string[100];
  input_string(string);
  int no_words = count_words(string);
  output(string,no_words);
  return 0;
}

void input_string(char *a)
{
  printf("Enter the string value : ");
  scanf("%s", a);
}

int count_words(char *string)
{
  int count=0, i=0;
  for (i=0 ; string[i] != '\0' && string[i] != ' '; i++)
  {
    count;
  }
  return count;
}

void output(char *string, int no_words)
{
  printf("The number of words in '%s' is %d", string, no_words);
}
