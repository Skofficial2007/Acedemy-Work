/*
Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.
E.g.- INITIAL array : 58 24 13 15 63 9 8 81 1 78 After spliting : 9 8 81 1 78
*/

#include <stdio.h>

const int n = 10;
void main ()
{
    int a[n], b[n], c[n], d = 0;
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n/2; i++)
    {
        b[i] = a[i];
    }
    for(int i = n/2; i < n; i++)
    {
        c[d] = a[i];
        d++;
    }
    printf("Your elements in original array are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nYour elements after split are: \n");
    printf("For First half: ");
    for(int i = 0; i < n/2; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nFor Second half: ");
    for(int i = 0; i < d; i++)
    {
        printf("%d ", c[i]);
    }
}