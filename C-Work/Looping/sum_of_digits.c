/*
Calculate the sum of digits of a number given by user. E.g.-
INUPT : 123 OUPUT : 6
INUPT : 12345 OUPUT : 15
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n, t, s = 0, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0)
    {
        d = t%10;
        s = s + d;
        t = t/10;
    }
    printf("Sum of digits of number %d is: %d", n, s);
}