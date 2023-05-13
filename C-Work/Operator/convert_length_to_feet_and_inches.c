//Take input of some length in meter and covert it to feet and inches. 

 
#include <stdio.h>
void main () 
{
  
double l, f, in;
 
printf ("Enter length: ");
 
scanf ("%lf", &l);

f = l * 3.2808399;
  
in = l * 39.3700787;
  
printf ("Length in feet: %lf \n", f);
  
printf ("Length in inch: %lf", in);
 
} 
 
 
 
 
