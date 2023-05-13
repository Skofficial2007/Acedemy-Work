/*
Define two methods to print the maximum and the minimum number respectively 
among three numbers entered by user.Define a program to find out whether a given 
number is even or odd. 
*/

#include <stdio.h>

int max_min(int, int, int);
int even_odd(int);

int main()
{
    int a, b, c;
    printf("\nEnter value of A: ");
    scanf("%d", &a);
    printf("\nEnter value of B: ");
    scanf("%d", &b);
    printf("\nEnter value of C: ");
    scanf("%d", &c);

    max_min(a, b, c);
    even_odd(a);
    even_odd(b);
    even_odd(c);
    
    return 0;
}

int max_min(int x, int y, int z)
{
    if(x > y && x > z)
    {
        printf("\n%d is greatest\n", x);
        if(y > z)
        {
            printf("\n%d is smallest\n", z);
            return 0;
        }
        else
        {
            printf("\n%d is smallest\n", y);
            return 0;
        }
    }
    else if(y > x && y > z)
    {
        printf("\n%d is greatest\n", y);
        if(x > z)
        {
            printf("\n%d is smallest\n", z);
            return 0;
        }
        else
        {
            printf("\n%d is smallest\n", x);
            return 0;
        }
    }
    else
    {
        printf("\n%d is greatest\n", z);
        if(x > y)
        {
            printf("\n%d is smallest\n", y);
            return 0;
        }
        else
        {
            printf("\n%d is smallest\n", x);
            return 0;
        }
    }
}

int even_odd(int x)
{
    if(x%2 != 0)
    {
        printf("\n%d is a odd number\n", x);
    }
    else
    {
        printf("\n%d is a even number\n", x);
    }
}

