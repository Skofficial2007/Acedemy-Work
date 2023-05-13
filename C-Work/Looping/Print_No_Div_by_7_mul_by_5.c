/*
Program to Find Numbers which are Divisible by 7 and Multiple of 5 in a Given
Range
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1, n2;
    printf("Enter a range of number n1 to n2: ");
    scanf("%d %d", &n1, &n2);
    if(n1 < 0 || n2 < n1)
    {
        printf("Invalid Range");
        exit(0);
    }
    for(int i = n1; i <= n2; i++)
    {
        if(i%7 == 0 && i%5 == 0)
        {
            printf("%d\n", i);
        }
    }
}