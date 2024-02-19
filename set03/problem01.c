// 1] Write a program to find the distance between 2 points

#include <stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
  float x1, y1, x2, y2;
  input(&x1, &y1, &x2, &y2);
  float distance = find_distance(x1, y1, x2, y2);
  output(x1, y1, x2, y2, distance);
  return 0;
}

void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the co-ordinate of the first point : \n");
  scanf("%f %f", x1, y1);
  printf("Enter the co-ordinate of the second point : \n");
  scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
  float distance = 0;
  distance =sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  return distance; 
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between point (%.4f , %.4f) and (%.4f , %.4f) is %.4f\n", x1, y1, x2, y2, distance);
}