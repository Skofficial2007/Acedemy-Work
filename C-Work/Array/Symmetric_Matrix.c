/*
Write a C program to check Symmetric matrix.
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
    int r, c, a[20][20], b[20][20], flag = 0;
    printf("Enter no. of rows and columnns for matrix A: ");
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter element in matrix: ");
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(b[i][j] == a[i][j])
            {
                flag++;
            }
        }
    }

    if(flag == (r*c))
        printf("It is a Symmetric Matrix");
    else
        printf("No, It is not a Symmetric Matrix");
}