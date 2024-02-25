// 3] Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*
// weight = pi * stomach_radius^3 * sqrt(height * length)`

#include <stdio.h>
#include<math.h>

struct camel
{
  float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); // pass by value
void output(Camel c);

int main()
{
  Camel c = input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input()
{
  Camel c;
  printf("Enter the radius of the camel : ");
  scanf("%f", &c.radius);
  printf("Enter the height of the camel : ");
  scanf("%f", &c.height);
  printf("Enter the length of the camel : ");
  scanf("%f", &c.length);
  return c;
}

void find_weight(Camel *c) 
{
    const float pi = 3.1415;
    c->weight = pi * c->radius * c->radius * c->radius * sqrt(c->height * c->length);
}

void output(Camel c) 
{
  printf("The weight of the camel with radius : %.2f, height : %.2f, length : %.2f is %.4f\n", c.radius, c.height, c.length, c.weight);
}