/*
Write a C program to find sum of each row and column of a matrix. 
*/

#include <stdio.h>

void main()
{
    int r, c, x = 1, s = 0;
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

    for(int j = 0; j < c; j++)
    {
        for(int i = 0; i < r; i++)
        {
            s = s + a[i][j];
        }
        printf("Sum of row %d is: %d\n", x, s);
        x++;
        s = 0;
    }

    x = 1;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            s = s + a[i][j];
        }
        printf("Sum of column %d is: %d\n", x, s);
        x++;
        s = 0;
    }
}