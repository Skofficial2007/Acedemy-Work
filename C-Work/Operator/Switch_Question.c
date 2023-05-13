/*
Given an integer choice denoting the choice of the user and a list containing the single 
value R or two values L and B depending on the choice. 
If the user's choice is 1, calculate the area of the circle having the given radius(R). 
Else if choice is 2, calculate the area of the rectangle with given length(L) and breadth(B).
*/

#include <stdio.h>

void main()
{
    int n;
    float r, a, l, b, pi = (22/7.0);
    printf("You have two choices: \n");
    printf("Enter 1, To find area of circle \n");
    printf("Or \nEnter 2, To find area of rectangle \n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        {
            printf("Enter Radius of circle: ");
            scanf("%f", &r);
            a = pi*r*r;
            printf("Area of Circle is: %.2f", a);
            break;
        }
        case 2:
        {
            printf("Enter length and breath: ");
            scanf("%f %f", &l, &b);
            a = l*b;
            printf("Area of Rectangle is: %.2f", a);
            break;
        }
        default:
            printf("Invalid Input");
            break;
    }
} 
 
 
 
 


