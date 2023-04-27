/*
Selection Sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int n, A[100], m, loc, temp;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        m = A[i];
        for(int j = i+1; j < n; j++)
        {
            if(m > A[j])
            {
                m = A[j];
                loc = j;
            }
        }
        if(A[loc] < A[i])
        {
            temp = A[loc];
            A[loc] = A[i];
            A[i] = temp;
        }
    }
    printf("The element are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}