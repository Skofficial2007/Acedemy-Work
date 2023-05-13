/*
Reverse A given Number using Do-While
*/

#include <stdio.h>

void main()
{
    int n, r, s = 0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    do
    {
        r = t%10;
        s = s*10 + r;
        t = t/10;
    } while (t > 0);
    printf("%d", s);
    
}