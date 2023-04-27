/*
Value equal to index value:
Given an array Arr of N positive integers.
Your task is to find the elements whose value is equal
to that of its index value ( Consider 1-based indexing ).
Note:
There can be more than one element in the array
which have the same value as its index.
You need to include every such element's index.
Follows 1-based indexing of the array.
*/

#include <stdio.h>

void main()
{
    int a[100], n, i;
    printf("Enter number of elements you want: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == i)
        {
            printf("%d is at index %d\n", a[i], i);
        }
    }
    if(i == n)
    {
        printf("No Element that satisfy the condition is found");
    }
}