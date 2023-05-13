/*
Write a program to find the subtract two no. and the answer should always be Positive
*/

#include <stdio.h>

void main()
{
    float a, b, s;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);
    if(a>=b)
    {
        s = a - b;
    }
    else
        s = b - a;
    if(s>0)
    {
        printf("The answer is: %.2f", s);
    }
    else
        printf("Invalid Answer");
} 
 
 
 
 

