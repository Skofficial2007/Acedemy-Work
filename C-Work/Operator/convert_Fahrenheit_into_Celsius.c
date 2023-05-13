//Write a program to convert Fahrenheit into Celsius.

 
#include <stdio.h>
void main () 
{
  
double f, c;
 
printf ("Enter temp in Fahrenheit: ");
 
scanf ("%lf", &f);

c = (((f-32)*5)/9);
  
printf ("Temp in Celsius: %lf", c);
 
} 
 
 
 
 
