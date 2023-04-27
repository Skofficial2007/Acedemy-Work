/*
Write a program to find the sum and product of all elements of an array.
*/

#include <stdio.h>

const int n = 10;
void main()
{
    int a[n], s = 0;
    long long int p = 1;
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        s = s + a[i];
        p = p*a[i];
    }
    printf("Your elements in array are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nSum of all the elements are %d & Product of all the elements are %lld", s, p);
}