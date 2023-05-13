/*
Define a method that returns the product of two numbers entered by user. 
*/

#include <stdio.h>

int product(int a, int b)
{
    printf("\n\nProduct of %d & %d is: %d\n\n", a, b, a*b);
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    product(a, b);

    return 0;
}