/*
Write a C program to find lower triangular matrix.
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
    int r, c, a[20][20], x = 0;
    printf("Enter no. of rows and columnns for matrix A: ");
    scanf("%d %d", &r, &c);
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
            if(j > x)
            {
                a[i][j] = 0;
            }
        }
        x++;
    }

    printf("Matrix: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }
}