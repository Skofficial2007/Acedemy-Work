/*
Take 10 integers from keyboard using loop and print their average value on the screen.
*/

#include <stdio.h>

void main()
{
    int n, avg = 0;

    for(int i=0; i < 10; i++)
    {
        printf("Enter value of n: ");
        scanf("%d", &n);
        avg = avg + n;
    }

    printf("The average value of all the values: %d", avg);
}