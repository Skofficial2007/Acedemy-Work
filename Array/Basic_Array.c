/*
Take 10 integer inputs from user and store them in an array and print them on screen. 
*/

#include <stdio.h>

const int n = 10;
void main()
{
    int a[n];
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Your elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}