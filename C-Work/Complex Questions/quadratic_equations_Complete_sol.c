/* Write a program to find the answer of a quadratic equations: 
ax^2 + bx + c = 0 
*/

#include <stdio.h>
#include<math.h>

void main ()
{
    int a, b, c, n;
    float x, x1, x2, y1, y2, d, temp1, temp2;
    printf("We know that a quadratic equation is in a form of ax^2 + bx + c = 0\n");
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nThe equation is : %dx^2 + %dx + %d\n", a, b, c);
    
    d = (b*b) - (4*a*c);
    
    printf("D is: %.2f\n", d);
    
    if (d>0)
    {
        n = 1;
    }
    else if (d<0)
    {
        n = 2;
    }
    else
    {
        n = 3;
    }    
    switch(n)
    {
        case 1:
            {
                printf("D is positive means it will have two unique solutions");
                temp1 = sqrt(d);
                x1 = ((-b) + (temp1))/(2.0*a);
                x2 = ((-b) - (temp1))/(2.0*a);
                printf("\nThe answer is: %f, %f", x1, x2);
                break;
            }
        case 2: 
            {
                printf("D is negative means it will have 2 complex solutions\n");
                d = d*(-1);
                temp2 = sqrt(d);
                float t;
                y1 = (-b)/(2.0*a);
                t = (temp2)/(2.0*a);
                y2 = (-b)/(2.0*a);
                printf("The two complex equations are: \n");
                printf("x1 = %f + %fi\n", y1, t);
                printf("x2 = %f - %fi\n", y2, t);
                break;
            }
        case 3:
            {
                printf("D is equal to zero means it will have same solution");
                x = (-b)/(2.0*a);
                printf("\nThe answer is: %f", x); 
                break;
            }
        default:
            printf("Somethng is wrong");
    }
}
