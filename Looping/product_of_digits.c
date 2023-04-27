/*
Write C program to calculate product of digits of a number
*/

#include <stdio.h>

void main()
{
    int n, r, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        r = n%10;
        p = p*r;
        n /= 10;
    }
    printf("Product is: %d", p);
}