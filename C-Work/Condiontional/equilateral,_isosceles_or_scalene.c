/*
Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
*/

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter Sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c && b==c)
    {
        printf("The triangle is equilateral");
    }
    else if(a==b || a==c || b==c)
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The triangle is scalene");
    }
}
