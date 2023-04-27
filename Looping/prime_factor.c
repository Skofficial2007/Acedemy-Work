/*
Write a program to find prime factor of a number. If a factor of a number is prime number
then it is its prime factor.
*/

#include <stdio.h>

void main()
{
    int n, c, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    for(c = 2; t > 1; c++)
    {
        while(t%c == 0)
        {
            printf("It is's prime are: %d\n", c);
            t = t/c;
        }
    }
}