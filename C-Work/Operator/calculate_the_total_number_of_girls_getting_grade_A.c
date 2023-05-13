//The total number of students in a class are 45 out of which 25 are boys. 
//If 80% of the total students secured grade 'A' out of which 15 are boys, then write a program to calculate the total number of girls getting grade 'A'

 
#include <stdio.h>
void main () 
{
  
int t, b, g, a, ba, ga;

t = 45;
b = 25;
g = t - b;
a = ((t * 80) / 100);
ba = 15;
ga = a - ba;

printf("Total Students : %d \n", t);
printf("Total Boys : %d \n", b);
printf("Total Girls : %d \n", g);
printf("Total Students secured grade 'A': %d \n", a);
printf("Total Boys secured grade 'A': %d \n", ba);
printf("Total Girls secured grade 'A': %d", ga);
 
} 
 
 
 
 
