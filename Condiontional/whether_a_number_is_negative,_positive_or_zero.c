/*
Write a C program to check whether a number is negative, positive or zero.
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n>0)
    {
        printf("The number is Positive");
    }
    else if(n == 0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("The number is negative");
    }
}

