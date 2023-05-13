/*
Write a program to shift every element of an array to circularly right.
E.g.- INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int n, a[100], b[100], count = 0;
    char ch;
    printf("Enter the number of elements you need even only: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(i == n-1)
        {
            b[0] = a[n-1];
        }
        else
        {
            b[i+1] = a[i];
        }
    }
    printf("Elements in A array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nElements in B array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    while(1)
    {
        printf("\nDo you want to change again, enter either y Or n : ");
        scanf("\n%c", &ch);
        if(ch == 'n' || ch =='N')
        {
            exit(0);
        }
        else if(ch == 'y' || ch == 'Y')
        {
            count++;
            if(count%2 == 0)
            {
                for(int i = 0; i < n; i++)
                {
                    if(i == n-1)
                    {
                        b[0] = a[n-1];
                    }
                    else
                    {
                        b[i+1] = a[i];
                    }
                }
                printf("Elements in array are: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", b[i]);
                }
            }
            else
            {
                for(int i = 0; i < n; i++)
                {
                    if(i == n-1)
                    {
                        a[0] = b[n-1];
                    }
                    else
                    {
                        a[i+1] = b[i];
                    }
                }
                printf("Elements in array are: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
            }
        }
        else
        {
            printf("Wrong Input enter again \n");
        }
    }
}