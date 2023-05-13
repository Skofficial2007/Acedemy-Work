/*
Write a C program to input all sides of a triangle and check whether triangle is valid or not.
*/

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter Sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf ("It is a triangle");
    }
    else
    {
        printf ("It is not a triangle");
    }
}
