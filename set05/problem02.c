// 2] Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
//weight = pi * stomach_radius^3 * sqrt(height * length)

#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
  float radius, height, length, weight;
  input_camel_details(&radius, &height, &length);
  weight = find_weight(radius, height, length);
  output(radius, height, length, weight);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius value : ");
  scanf("%f",radius);
  printf("Enter the height value : ");
  scanf("%f",height);
  printf("Enter the length value : ");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
  float weight=0;
  const float pi = 3.1415;
  weight = pi * pow(radius,3) * sqrt(height * length);
  return weight;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with \nradius : %.1f\nheight : %.1f\nlength : %.1f\nis %.4f",radius, height, length, weight);
}