/*
Write a program to check if elements of an array are same or not it read from front or back. 
*/

#include <stdio.h>

const int n = 100;
void main ()
{
    int temp;
    int a[100], b[100], c = 0, g;
    printf("Enter number of elements you need in array: ");
    scanf("%d", &temp);
    printf("Enter elements in array: ");
    for(int i = 0; i < temp; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("ORIGINAL ARRAY: \n");
    for(int i = 0; i < temp; i++)
    {
        printf("%d ", a[i]);
    }

    // To Delete duplicate element
    for(int i = 0; i < temp; i++)
    {
        for(int j = i+1; j < temp; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k < temp-1; k++)
                {
                    a[k] = a[k+1];
                }
                temp--;
                j--;
            }
        }
    }
    printf("\nCHANGED ARRAY: \n");
    for(int i = 0; i < temp; i++)
    {
        printf("%d ", a[i]);
    }
}