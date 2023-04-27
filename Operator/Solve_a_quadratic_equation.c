/* Write a program to find the answer of a quadratic equations: 
ax^2 + bx + c = 0 
a ≠ 0  */

#include <stdio.h>
#include<math.h>

int
main ()
{
    int a, b, c;
    float x1, x2, d, temp;
    printf("We know that a quadratic equation is in a form of ax^2 + bx + c = 0\n");
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nThe equation is : %dx^2 + %dx + %d", a, b, c);
    
    d = (b*b) - (4*a*c);
    temp = sqrt(d);
    x1 = ((-b) + (temp))/(2*a);
    x2 = ((-b) - (temp))/(2*a);
    
    printf("\nThe answer is: %f, %f", x1, x2);
}
