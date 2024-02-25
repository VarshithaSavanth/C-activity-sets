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

void input_string(char *a);

int count_words(char *string);

void output(char *string, int no_words);
