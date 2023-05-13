/*
Write a C program to find determinant of a matrix.
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

int two[2][2];
int r, c, a[20][20], result, h = 0, k = 0, D = 0;

int twoBytwoMatrix(int *p)
{
    return two[0][0]*two[1][1] - two[0][1]*two[1][0];
}

int threeBythreeMatrix(int *p, int r, int c)
{
    for(int g = 0; g < c; g++)
    {
        if(g == 0)
        {
            for(int i = 1; i < r; i++)
            {
                for(int j = 1; j < c; j++)
                {
                    two[h][k] = a[i][j];
                    k++;
                }
                h++;
                k = 0;
            }
            h = 0;
            D = D + a[0][g]*twoBytwoMatrix(&two[2][2]);
        }
        else if(g == 1)
        {
            for(int i = 1; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    if(j != 1)
                        two[h][k] = a[i][j];
                    k++;
                }
                h++;
                k = 0;
            }
            h = 0;
            D = D - a[0][g]*twoBytwoMatrix(&two[2][2]);
        }
        else
        {
            for(int i = 1; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    if(j != 2)
                        two[h][k] = a[i][j];
                    k++;
                }
                h++;
                k = 0;
            }
            h = 0;
            D = D + a[0][g]*twoBytwoMatrix(&two[2][2]);
        }
    }
    return D;
}

void main()
{
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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    if(r != c)
    {
        printf("Can't find a determinent of this matrix");
    }
    else if(r == 2)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                two[i][j] = a[i][j];
            }
        }
        result = twoBytwoMatrix(&two[2][2]);
        printf("Determinent is: %d", result);
    }
    else if(r == 3)
    {
        result = threeBythreeMatrix(&a[r][c], r, c);
        printf("%d", result);
    }
    else
    {
        printf("Matrix is too big to calculate by this program");
    }
}