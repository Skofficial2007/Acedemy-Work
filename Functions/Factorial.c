/*
Write a program to print the factorial of a number by defining a method named 
'Factorial'. Factorial of any number n is represented by n! and is equal to 
1*2*3*....*(n-1)*n. E.g.- 
4! = 1*2*3*4 = 24 
3! = 3*2*1 = 6 
2! = 2*1 = 2 
Also, 
1! = 1 
0! = 0 
*/

#include <stdio.h>

int factorial(int a, int fact)
{
    while(a != 0)
    {
        fact = fact * a;
        a--;
    }

    return fact;
}

int main()
{
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num, fact);

    printf("\nFactorial of number %d is: %d\n", num, result);

    return 0;
}