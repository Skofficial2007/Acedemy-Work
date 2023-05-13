/*
At least two greater elements:
Given an array of N distinct elements,
the task is to find all elements in array
except two greatest elements in sorted order.
*/

#include <stdio.h>

void main()
{
    int a[100], n, m, loc, temp;
    printf("Enter number of elements you want: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }
    
    // Selection  Sort
    for(int i = 0; i < n-1; i++)
    {
        m = a[i];
        for(int j = i+1; j < n; j++)
        {
            if(m > a[j])
            {
                m = a[j];
                loc = j;
            }
        }
        if(a[loc] < a[i])
        {
            temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
        }
    }

    // Print sorted array
    printf("The sorted elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    // Removing last two greatest elements
    printf("\nThe answer is: ");
    for(int i = 0; i < n-2; i++)
    {
        printf("%d\t", a[i]);
    }
}