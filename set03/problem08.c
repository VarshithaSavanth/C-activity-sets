// 8] Write a program to find the permeter of a polygon

#include <stdio.h>

typedef struct point
{
  float x, y;
} Point;

typedef struct polygon
{
  int sides;
  Point p[100];
  float perimeter;
} Polygon;

int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main()
{
  Polygon p;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}

int input_n()
{

}

Point input_point(char *promt_msg);

int input_polygon(Polygon *p);

float find_distance(Point a, Point b);

void find_perimeter(Polygon *p);

void output(Polygon p);