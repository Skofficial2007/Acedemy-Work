/*
Write a program to find whether entered number is prime or not.
*/

#include <stdio.h>

int main()
{
    int n, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 2)
    {
        printf("Prime Number");
        return 0;
    }
    while(i < n)
    {
        if(n%i == 0)
        {
            printf("Not a prime number");
            break;
        }
        else
        {
            printf("Prime Number");
            break;
        }
        i++;
    }
}