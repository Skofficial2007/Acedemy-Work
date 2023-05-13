//Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.

#include <stdio.h>
void main () 
{

double r, a, p, pi;
  
printf ("Enter radius of circle: ");
  
scanf ("%lf", &r);
  
pi = 22 / 7.0;
  
p = 2 * pi * r;
  
a = pi * r * r;
  
printf ("The Area of circle: %lf \n", a);
  
printf ("The perimeter of circle: %lf", p);

}
