/*
Write a program to find greatest common divisor (GCD) or highest common factor (HCF)
of given two numbers.
*/

#include <stdio.h>

void main()
{
    int n, n1, n2, i = 1, temp;
    printf("Enter values of n1 & n2: ");
    scanf("%d %d", &n1, &n2);
    if(n1 < n2)
        n = n1;
    else
        n = n2;

    while(i < n)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            temp = i;
        }
        i++;
    }
    printf("The greatest common divisor (GCD) of %d & %d: %d", n1, n2, temp);
}