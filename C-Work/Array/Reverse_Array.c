/*
Write a program to Reverse a Array.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[100], n, t, b[100];
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    t = n -1;
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        b[i] = a[t];
        t--;
    }

    printf("Elements of array in reverse order: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}