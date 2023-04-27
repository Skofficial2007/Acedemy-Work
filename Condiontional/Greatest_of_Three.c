/*
Write a C program to find maximum between three numbers.
*/

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter values of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b && a>c)
    {
        printf("A is greatest");
    }
    else if(b>a && b>c)
    {
        printf("B is greatest");
    }
    else
    {
        printf("C is greatest");
    }
}

