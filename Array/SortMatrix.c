/*
Sort a 2D matrix according to row and column
*/

#include <stdio.h>

int r, c;
int a[10][10], b[100];

int row()
{
    int t1;
    printf("Enter no. of row: ");
    scanf("%d", &t1);
    return t1;
}

int column()
{
    int t2;
    printf("Enter no. of row: ");
    scanf("%d", &t2);
    return t2;
}

void matrix()
{
    r = row();
    c = column();
    int n = 0;

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
            b[n] = a[i][j];
            n++;
        }
    }
}

void sorting()
{
    int n = r*c;

    for(int i = 0; i < n-1; i++)
    {
        int x = i;
        for(int j = i+1; j < n; j++)
        {
            if(b[x] > b[j])
            {
                x = j;
            }
        }
        int temp = b[i];
        b[i] = b[x];
        b[x] = temp;
    }
}

void sortedMatrixWithRow()
{
    sorting();
    int n = 0;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            a[i][j] = b[n];
            n++;
        }
    }
}

void sortedMatrixWithColumn()
{
    sorting();
    int n = 0;

    for(int j = 0; j < c; j++)
    {
        for(int i = 0; i < r; i++)
        {
            a[i][j] = b[n];
            n++;
        }
    }
}

void space(int a)
{
    if(a < 0)
    {
        a = a*(-1);

        if(a < 10)
        {
            printf("-%d   ", a);
        }
        else if(a < 100)
        {
            printf("-%d  ", a);
        }
        else
        {
            printf("-%d ", a);
        }
    }
    else if(a < 10)
    {
        printf("%d    ", a);
    }
    else if(a < 100)
    {
        printf("%d   ", a);
    }
    else
    {
        printf("%d  ", a);
    }
}

void main()
{
    matrix();
    printf("Your Matrix is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }

    sortedMatrixWithRow();
    printf("\nYour Matrix after sorting acc. to row is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }

    sortedMatrixWithColumn();
    printf("\nYour Matrix after sorting acc. to column is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }
}