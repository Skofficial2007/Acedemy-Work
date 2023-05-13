/*
A three digit number is called Armstrong number if sum of cube of its digit is equal to
number itself.
E.g.- 153 is an Armstrong number because (1^3)+(5^3)+(3^3) = 153.
Write all Armstrong numbers between 100 to 500.
*/

#include <stdio.h>

void main()
{
    int n = 100, r, s = 0, i;
    while(n < 500)
    {
        i = n;
        while(i > 0)
        {
            r = i%10;
            s = s + (r*r*r);
            i = i/10;
        }
        if(n == s)
        {
            printf("%d is a Armstrong Number\n", n);
        }
        s = 0;
        r = 0;
        n++;
    }
}