/* Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables. E.g.-
If entered value of x is 5 and y is 10 then
printf("%d %d",x,y )
should print 10 5. */  
  
 
#include <stdio.h>
void main () 
{
  
int x, y, temp;
  
printf ("Enter value of x: ");
  
scanf ("%d", &x);
  
printf ("Enter value of y: ");
  
scanf ("%d", &y);
  
printf ("Value of x before swap: %d \n", x);
  
printf ("Value of y before swap: %d \n", y);
  
temp = x + y;
  
x = temp - x;
  
y = temp - y;
  
printf ("Value of x after swap: %d \n", x);
  
printf ("Value of y after swap: %d", y);

} 
 
 
 
 
