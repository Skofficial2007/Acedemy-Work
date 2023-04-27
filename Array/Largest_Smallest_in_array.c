/*
Find largest and smallest elements of an array. 
*/

#include <stdio.h>

const int n = 10;
void main()
{
    int a[n], l = 0;
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > l)
        {
            l = a[i];
        }
    }
    int s = l;
    for(int i = 0; i < n; i++)
    {
        if(s > a[i])
        {
            s = a[i];
        }
    }
    printf("Your elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nLargest element in this array is %d", l);
    printf("\nSmallest element in this array is %d", s);
}