/*  Write a Program to Calculate compound interest. 
The formula to calculate compound interest annually is given by: 
A = P(1 + R/100)^t
 
Compound Interest = A – P 
Where, 
A is amount 
P is the principal amount 
R is the rate and T is the time span */

#include <stdio.h>
#include<math.h>

int
main ()
{
    float a, p, r, t, ci, power;
    
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate: ");
    scanf("%f", &r);
    printf("Enter Time span: ");
    scanf("%f", &t);
    
    power = pow( (1 + (r/100)), t);  
    
    a = (p)*(power);
    
    printf("\nPrint Power: %f", power);
    printf("\nPrint Amount: %f", a);
    
    ci = a - p;
    
    printf("\nThe Compound Intrest is: %f", ci);
}
