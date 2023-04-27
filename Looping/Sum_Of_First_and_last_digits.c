/*
Write C program to find the sum of first and last digit of any number
*/

#include <stdio.h>

void main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    int f, l, t = n, c, a = 1, s;
    while(t > 0)
    {
        c++;
        t = t/10;
        if(c > 1)
            a = a*10;
    }
    f = n/a;
    l = n%10;
    s = f+l;
    printf("f is: %d\n", f);
    printf("l is: %d\n", l);
    printf("Sum of first and last digits are: %d", s);
}