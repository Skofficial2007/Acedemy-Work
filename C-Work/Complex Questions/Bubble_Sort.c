/*
Bubble Sort
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
    
    for(int i = n-2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    printf("The element are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}