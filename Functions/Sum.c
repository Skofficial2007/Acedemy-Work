/*
Write a program to print the sum of two numbers entered by user by defining your 
own method. 
*/

#include <stdio.h>

int sum(int a, int b)
{
    printf("\n\nSum of %d & %d is: %d\n\n", a, b, a+b);
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    sum(a, b);
    return 0;
}