/*
Write a program to input two sides of a rectangle and check whether it’s a square or not 
*/

#include <stdio.h>

void main()
{
    int l, b;
    printf("Enter the length and breath : ");
    scanf("%d %d", &l, &b);
    if(l>0 && b>0)
    {
        if(l==b)
        {
            printf("It isn't a rectangle it's a square");
        }
        else
            printf("It is a rectangle");
    }
    else
        printf("Invalid Inputs");
} 
 
 
 
 

