/*
Input any number. Find the sum of the digits of the number using a recursive function.
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n != 0)
    {
        return(n%10 + sum(n/10));
    }
    else
    {
        return 0;
    }
}

void main ()
{
    int n, result; 
    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum of digits of number %d is: %d", n, result);
}