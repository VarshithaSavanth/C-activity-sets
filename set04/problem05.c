// 5] Write a program to find the index of the largest number in an array

#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
  int n = input_size();
  int a[n];
  input_array(n, a);
  int index = find_largest_index(n, a);
  output(index);
  return 0;
}

int input_size()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter the array elements : ");
    scanf("%d", &a[i]);
  }
}

int find_largest_index(int n, int a[n])
{
  int index = a[0];
  for(int i=1 ; i<n ; i++)
  {
    if(a[i] > index)
    {
      index = i;
    }
  }
  return index;
}

void output(int index)
{
  printf("The index of the largest number in the array is %d\n", index);
}