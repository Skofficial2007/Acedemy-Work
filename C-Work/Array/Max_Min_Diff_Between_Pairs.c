/*
Consider an integer array, the number of elements in which is determined by the user.
The elements are also taken as input from the user.
Write a program to find those pair of elements that has the maximum
and minimum difference among all element pairs.
*/

#include <stdio.h>

void main ()
{
    int t, d = 0, g, a[100];
    printf("Enter the number of elements you need even only: ");
    scanf("%d", &t);
    printf("Enter elements in array: ");
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < t; i++)
    {
        g = a[i] - a[i+1];
        if(g > d)
        {
            d = g;
            printf("a[i] : %d, a[i+1] : %d, d : %d\n", a[i], a[i+1], d);
        }
    }
    printf("Maximum difference between pairs are: %d\n", d);
    for(int i = 0; i < t; i++)
    {
        g = a[i] - a[i+1];
        if(g < d)
        {
            d = g;
            printf("a[i] : %d, a[i+1] : %d, d : %d\n", a[i], a[i+1], d);
        }
    }
    printf("Minimum difference between pairs are: %d\n", d);
}