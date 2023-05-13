/*
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 1
Write a program to calculate factorial of a number.
*/

#include <stdio.h>

void main()
{
    int n, f;
    printf("Enter the number to find factorial of: ");
    scanf("%d", &n);
    f = 1;

    for(int i = 1; i <= n; i++)
    {
        f = f*i;
        printf("%d", i);
        if(i < n)
        {
            printf(" x ");
        }
    }
    printf("\nFactorial of %d: %d", n, f);
}