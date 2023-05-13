/*
Write a program check whether a year is Leap or not. 
If a year is divisible by 4 then it’s a leap year but of the year is century year like 
2000,21000,1900,… then it must be divisible by 400. 
*/

#include <stdio.h>


void main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);
    if((y%400) == 0)
    {
        printf("%d is a leap year", y);
    }
    else if((y%100) == 0)
    {
        printf("%d is not a leap year", y);
    }
    else if((y%4) == 0)
    {
        printf("%d is a leap year", y);
    }
    else
        printf("%d is not a leap year", y);
} 
 
 
 
 


