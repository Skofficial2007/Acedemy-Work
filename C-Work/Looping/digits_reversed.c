/*
Write a program to print a number given by user but digits reversed. E.g.-
INPUT : 123         OUTPUT : 321
INPUT : 12345       OUTPUT : 54321
*/

#include <stdio.h>

void main()
{
    int n, t, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0)
    {
        r = t%10;
        s = (s*10) + r;
        t = t/10;
    }
    printf("The reverse of %d is: %d", n, s);
}