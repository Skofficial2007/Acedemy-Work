/*
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative
numbers number of odd numbers
number of even numbers
number of 0s.
*/

#include <stdio.h>

const int n = 20;
void main()
{
    int a[n];
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            if(a[i]%2 == 0)
            {
                printf("Even number %d at %d\n", a[i], i);
            }
            else
            {
                printf("Odd number %d at %d\n", a[i], i);
            }
        }
        else if(a[i] == 0)
        {
            printf("Zero at %d\n", i);
        }
        else
        {
            printf("Negative number %d at %d\n", a[i], i);
        }
    }
}