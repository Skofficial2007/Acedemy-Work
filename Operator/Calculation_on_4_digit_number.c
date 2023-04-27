/*Write a program to enter a 4 digit number from keyboard. Add 8 to the number and then divide it by 3. 
Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result.*/
   
  
#include <stdio.h>
void main () 
{
  
int n, m, r;

printf ("Enter a 4 digit number: ");
  
scanf ("%d", &n);
  
printf ("The number before adding 8 and dividing it by 3 : %d \n", n);
  
n = (n + 8) / 3;
  
printf ("The number after adding 8 and dividing it by 3 : %d \n", n);
  
m = n % 5;
  
printf ("The modules wrt 5 is: %d \n", m);
  
r = m * 5;
  
printf ("The result is : %d", r);

} 
