/*
Insertion Sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int n, A[100], temp;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &A[i]);
    }
    
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            if(A[j-1] > A[j])
            {
                temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("The element are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}