/*
Write a C program to subtract two matrices. 
*/

#include <stdio.h>
#include <stdlib.h>

void space(int a)
{
    if(a < 0)
    {
        printf("%d  ", a);
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
    int ra, ca, rb, cb;
    printf("Enter no. of rows and columnns for matrix A: ");
    scanf("%d %d", &ra, &ca);
    int a[ra][ca];
    for(int i = 0; i < ra; i++)
    {
        for(int j = 0; j < ca; j++)
        {
            printf("Enter element in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter no. of rows and columnns for matrix B: ");
    scanf("%d %d", &rb, &cb);
    int b[rb][cb];
    for(int i = 0; i < rb; i++)
    {
        for(int j = 0; j < cb; j++)
        {
            printf("Enter element in matrix: ");
            scanf("%d", &b[i][j]);
        }
    }

    if(ra != rb || ca != cb)
    {
        printf("Sum is not possible for these matrices");
        exit(0);
    }

    int c[ra][ca];

    for(int i = 0; i < ra; i++)
    {
        for(int j = 0; j < ca; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Matrix A is: \n");
    for(int i = 0; i < ra; i++)
    {
        for(int j = 0; j < ca; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B is: \n");
    for(int i = 0; i < ra; i++)
    {
        for(int j = 0; j < ca; j++)
        {
            space(b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix C is: \n");
    for(int i = 0; i < ra; i++)
    {
        for(int j = 0; j < ca; j++)
        {
            space(c[i][j]);
        }
        printf("\n");
    }
}