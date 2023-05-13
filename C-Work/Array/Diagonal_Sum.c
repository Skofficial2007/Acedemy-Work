/*
Write a C program to find sum of main diagonal elements of a matrix.
*/

#include <stdio.h>

void space(int a)
{
    if(a < 0)
    {
        printf(" %d  ", a);
    }
    else if(a < 10)
    {
        printf("%d   ", a);
    }
    else if(a < 100)
    {
        printf("%d  ", a);
    }
    else
    {
        printf("%d ", a);
    }
}

void main()
{
    int r, c, x = 0, s = 0;
    printf("Enter no. of rows and columnns for matrix A: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter element in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(j == x)
            {
                s = s + a[i][j];
            }
        }
        x++;
    }

    printf("Matrix is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }

    printf("Sum of diagonal elements are: %d", s);
}