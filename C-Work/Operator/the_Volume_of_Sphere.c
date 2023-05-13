//Write a program to find the Volume of Sphere

#include <stdio.h>

int
main ()
{
  double pi, r, vol;
  printf ("The radius of sphere is: ");
  scanf ("%lf", &r);
  pi = (22/7.0);
  vol = (4/3.0)*(pi*r*r*r);
  printf("The Volume of Sphere is: %lf", vol);
}
