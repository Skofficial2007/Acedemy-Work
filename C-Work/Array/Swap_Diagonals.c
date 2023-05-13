/*
Write a C program to interchange diagonals of a matrix. 
*/

#include <stdio.h>
#include <stdlib.h>

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
    int r, c, x, y, s = 0, temp, temp2;
    printf("Enter no. of rows and columnns for matrix A: ");
    scanf("%d %d", &r, &c);

    if(r != c)
    {
        printf("Diagonal Swap is not possible in this matrix");
        exit(0);
    }

    int a[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter element in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("Elements in matrix are: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }

    x = 0;
    y = c -1;
    int d[r];
    int e[r];

    for(int i = 0; i < r; i++)
    {
        d[x] = a[i][x];
        e[x] = a[i][y];
        x++;
        y--;
    }

    x = 0;
    y = c -1;

    for(int i = 0; i < r; i++)
    {
        a[i][y] = d[x];
        a[i][x] = e[x];
        x++;
        y--;
    }

    printf("Elements in matrix after swap are: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }
}