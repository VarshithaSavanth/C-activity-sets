// 7] Write a program to find the length of a line

#include <stdio.h>
#include<math.h>

typedef struct point
{
    float x, y;
} Point;

typedef struct line
{
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
    Line l = input_line();
    find_length(&l);
    output(l);
    return 0;
}

Point input_point()
{
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

Line input_line()
{
    Line l;
    printf("Enter x and y coordinates : \n");
    scanf("%f %f", &l.p1.x, &l.p1.y);
    printf("Enter x and y coordinates : \n");
    scanf("%f %f", &l.p2.x, &l.p2.y);
    return l;
}

void find_length(Line *l)
{
    l->distance = sqrt((l->p2.x - l->p1.x) * (l->p2.x - l->p1.x) + (l->p2.y - l->p1.y) * (l->p2.y - l->p1.y));
}

void output(Line l)
{
    printf("The distance between the points (%.5f,%.5f) and (%.5f,%.5f) is %.4f\n", l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}
