/*
Initialize a 2D array of 3*3 matrix. Check if the matrix is symmetric or not.
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
    int a[10][10], b[10][10], r, c, count = 0, p;
    printf("Enter the dimensions of matrix, row and columns: ");
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
    if(r != c)
    {
        printf("No, This matrix is not symmetric");
        exit(0);
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] == b[i][j])
            {
                count++;
            }
        }
    }
    p = r*c;
    if(count == p)
    {
        printf("Yes, This matrix is symmetric\n");
    }
    else
    {
        printf("No, This matrix is not symmetric\n");
    }
    
    printf("Matrix A is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of A is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(b[i][j]);
        }
        printf("\n");
    }
}