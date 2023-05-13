/*
Write a program to input age of two people and find Eldest among two.
*/

#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter age of a and b: ");
    scanf("%d %d", &a, &b);
    if(a > 0 && b > 0)
    {
        if(a > b)
        {
            printf("'A' is older than 'B'");
        }
        else
        {
            printf("'B' is older than 'A'");
        }
    }
    else
        printf("Invalid Age");
} 
 
 
 
 

