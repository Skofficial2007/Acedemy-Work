/*
Write a C program to input angles of a triangle and check whether triangle is valid or not.
*/

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a+b+c) == 180)
    {
        printf("This triangle is valid");
    }
    else
        printf("This triangle is not valid");
}

