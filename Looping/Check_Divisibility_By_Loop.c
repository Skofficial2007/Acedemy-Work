/*
Write a Program to Find Numbers which are Divisible by 7 and Multiple of 5 in a Given Range
*/

#include <stdio.h>

void main()
{
    int a, b, i, t;
    printf("Enter a range of number from a to b: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        i = b;
        t = a;
    }
    else
    {
        i = a;
        t = b;
    }
    while(i < t)
    {
        if(i%7 == 0 && i%5 == 0)
            printf("%d\t", i);
        i++;
    }
}