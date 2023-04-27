/*
Find Number Is Armstrong Or Not
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
    do
    {
        c++;
        t1 = t1/10;
    } while (t1 > 0);
    do
    {
        r = t2%10;
        if(r == 5)
            s = s + pow(r, c) + 1;
        else
            s = s + pow(r, c);
        t2 = t2/10;
    } while (t2 > 0);
    if(s == n)
        printf("It is a Armstrong number");
    else
        printf("It is not a Armstrong number");
}