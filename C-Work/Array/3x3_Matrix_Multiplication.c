/*
3x3 Matrix Multiplication
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
    int s = 0, r, c, p;
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int g[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int t = 0; t < 3; t++)
        {
            for(int j = 0; j < 3; j++)
            {
                r = a[i][j];
                c = b[j][t];
                p =r*c;
                s = s + p;
            }
            g[i][t] = s;
            s = 0;
        }
    }
    printf("Elements in a are: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }
    printf("Elements in b are: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            space(b[i][j]);
        }
        printf("\n");
    }
    printf("Elements in g are: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            space(g[i][j]);
        }
        printf("\n");
    }
}