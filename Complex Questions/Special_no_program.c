/*
Write a program to find whether entered number is Special
No. or not.
Example  145 = 1!+4!+5!=145
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n, t, r, f = 1, i = 1, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0)
    {
        r = t%10;
        while(i <= r)
        {
            f = f*i;
            i++;
        }
        s = s + f;
        f = 1;
        i = 1;
        t = t/10;    
    }
    if(s == n)
    {
        printf("Entered number %d is a Special No.", n);
    }
    else
        printf("Entered number %d is not a Special No.", n);
}