// Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.

#include <stdio.h>

void main ()
{
  int l = 5, b = 7, a, p;
  a = l * b;
  printf ("Area of rectangle is: %d \n", a);
  p = 2 * (l + b);
  printf ("Perimeter of rectangle is: %d", p);
}