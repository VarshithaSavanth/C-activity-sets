// 10] Write a C program to compare two strings, character by character.
// > For example, `Hello` should be equal to `Hello`, but not equal to `hello`.
// > `Hello` will be lesser than `Hellw` (alphabetical order).

#include<stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);