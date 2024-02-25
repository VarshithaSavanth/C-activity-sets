// 7] Write a program to find out if the name of the camel is a nice name.
//  A camel has a nice name if it has at least 2 vowels and 2 consonants in it

#include<stdio.h>

void input(char *name);
int has_nice_name(char *name);
void output(char *name, int res);

int main()
{
  char name[100];
  input(name);
  int res = has_nice_name(name);
  output(name, res);
  return 0;
}

void input(char *name)
{
  printf("Enter a name : ");
  scanf("%s", name);
}

int has_nice_name(char *name)
{
  int vowels = 0, consonents = 0;
  for (int i=0 ; name[i] != '\0' ; i++)
  {
    if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
       name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
       {
          vowels++;
       }
    else if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
    {
      consonents++;
    }   
  }
  int res = (vowels>=2 && consonents>=2);
  return res;
}

void output(char *name, int res)
{
  if(res)
  {
    printf("The camel %s has a nice name.\n", name);
  }
  else
  {
    printf("The camel %s does not have a nice name.\n", name);
  }
}