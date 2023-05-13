/*
Write a program to shuffle a given array of integers. Example:
Input : nums = { 1, 2, 3, 4, 5, 6 }
Output: Shuffle Array: [4, 2, 6, 5, 1, 3]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a[100], n, temp;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    srand( time(NULL) );

    for(int i = n-1; i > 0; i--)
    {
        int j = rand()%(i+1);
        temp = a[j];
        a[j] = a[i];
        a[i] = a[j];
    }

    printf("\nElements in array after shuffle: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}