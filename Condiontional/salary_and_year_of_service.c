/*
A Company decided to give bonus of 5% to employee if His / Her Years of service is more 
than 5 years of Service. Ask the user for their salary and year of service and print the net 
bonus amount. 
*/

#include <stdio.h>

void main()
{
    float s, b, y, bs;
    printf("Enter the salary of employee: ");
    scanf("%f", &s);
    printf("Enter the years of service: ");
    scanf("%f", &y);
    
    if(y>0 && s>0)
    {
        b = (s*5)/100;
        
        if(y>5)
        {
            printf("The bonus is applicable\n");
            bs = s + b;
            printf("The bonus salary is: %.2f\n", bs);
            printf("The bonus is: %.2f", b);
        }
        else
        {
            printf("The bonus is not applicable\n");
            printf("The salary of the employee is: %.2f", s);
        }
    }
    else
        printf("Invalid Input");
} 
 
 
 
 

