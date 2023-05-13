/*
Write a program to check if an array of integers contains two specified elements 65 and 77. 
*/

#include <stdio.h>

void main()
{
    int a[100], n;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 65)
        {
            printf("Element 65 is at %d\n", i);
        }
        else if(a[i] == 77)
        {
            printf("Element 77 is at %d\n", i);
        }
        else
        {
            continue;
        }
    }
}