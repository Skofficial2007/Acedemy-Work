/*
Write a C program to right rotate an array.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[100], n, f;
    char ch;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter elements in arrray: ");
        scanf("%d", &a[i]);
    }
    while(1)
    {
        f = a[0];
        for(int i = 0; i < n; i++)
        {
            if(i < n-1)
                a[i] = a[i+1];
            else
                a[i] = f;
        }
        printf("Elements in array are: ");
        for(int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        
        printf("Do you want to continue, enter y to continue: ");
        scanf("\n%c", &ch);
        if(ch == 'y' || ch == 'n')
        {
            continue;
        }
        else
        {
            exit(0);
        }
    }
}