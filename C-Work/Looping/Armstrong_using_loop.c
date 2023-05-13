/*
Write a program to find whether entered number is Armstrong or not.
Example  153  1^3+5^3+3^3=153
8208  8^4+2^4+0^4+8^4=8208
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n, c = 0, t1, t2, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t1 = n;
    t2 = n;
    while(t1 > 0)
    {
        c++;
        t1 = t1/10;
    }
    while(t2 > 0)
    {
        r = t2%10;
        s = (s*10) + pow(r, c);
        t2 = t2/10;
    }
    if(n == s)
        printf("It is a Armstrong number");
    else
        printf("It is not a Armstrong number");
}