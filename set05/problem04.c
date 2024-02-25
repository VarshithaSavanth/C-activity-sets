// 4] Write a program to find out the mood of a Camel.

/*Camel is:
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.*/

#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
  float radius, height, length;
  input_camel_details(&radius, &height, &length);
  int mood = find_mood(radius, height, length);
  output(radius, height, length, mood);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius : ");
  scanf("%f", radius);
  printf("Enter the height : ");
  scanf("%f", height);
  printf("Enter the length : ");
  scanf("%f", length);
}

int find_mood(float radius, float height, float length)
{
  if(radius < height && radius < length)
  {
    return -1;
  }
  else if(height < radius && height < length)
  {
    return 0;
  }
  else if (length < radius && length < height)
  {
    return 1;
  }
}

void output(float radius, float height, float length, int mood)
{
  if(mood < 0)
  {
    printf("Camel is sick");
  }
  else if(mood > 0)
  {
    printf("Camel is tense");
  }
  else
  {
    printf("Camel is happy");
  }
}