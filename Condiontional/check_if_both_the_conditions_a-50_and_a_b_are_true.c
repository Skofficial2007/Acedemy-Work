//Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

#include <stdio.h>
void main () 
{
  
int a, b;
  
printf ("Enter a number: ");
  
scanf ("%d", &a);
  
printf ("\nEnter a number: ");
  
scanf ("%d", &b);
  
if ((a < 50) && (a < b))
    
    printf ("Yes, conditions 'a < 50' and 'a < b' are true");
  
else
    
    printf ("No, one of the condition is false");

}


 
 
