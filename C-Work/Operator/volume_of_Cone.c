//Write a program to find the volume of Cone

#include <stdio.h>

int
main ()
{
  double pi, r, h, vol;
  printf ("The radius of cone is: ");
  scanf ("%lf", &r);
  printf ("The height of cone is: ");
  scanf ("%lf", &h);
  pi = (22 / 7.0);
  vol = ((pi * r * r * h) / 3);
  printf ("The Volume of cone is: %lf", vol);
}
