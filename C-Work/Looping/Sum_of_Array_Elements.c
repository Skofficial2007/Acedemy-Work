/*
Sum of Array Elements
Given an integer array arr of size n, you need to sum the elements of array.
*/

#include <stdio.h>

void main()
{
    int n, A[100], i, i2, i3 = 0, s = 0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &A[i]);
    }

    for(i2 = 0; i2 < n; i2++)
    {
        s = s + A[i2];
    }
    
    printf("\nElements of the array::");
    while(i3 < n)
    {
        printf("\nElement number %d::%d",i3, A[i3]);
        i3++;
    }

    printf("\nSum of elements is: %d", s);
}