/*
Write a program in C which is a Menu-Driven Program to compute the area of the various 
geometrical shape. 
*/

#include <stdio.h>

void main()
{
    int n;
    float a, s, l, b, r;
    
    printf("Enter from these choices: \n");
    printf("1. Rectangle\t2. Square\t3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    
    switch(n)
    {
        case 1:
        {
            printf("Enter length of rectangle: ");
            scanf("%f", &l);
            printf("Enter breath of rectangle: ");
            scanf("%f", &b);
            a = l*b;
            printf("Area of Rectangle: %.2f", a);
            break;
        }
        case 2:
        {
            printf("Enter side of Square: ");
            scanf("%f", &s);
            a = s*s;
            printf("Area of square is: %.2f", a);
            break;
        }
        case 3:
        {
            printf("Enter radius of Circle: ");
            scanf("%f", &r);
            a = 2*(22/7.0)*r*r;
            printf("Area of Circle is: %.2f", a);
            break;
        }
        default:
            printf("Invalid Input");
    }
}


