/*
Matrix Multiplication
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

int main()
{
    int n, m , p, q, r, c, k, s = 0;
    int a[10][10], b[10][10], g[10][10];
    
    printf("Enter row and columns of A (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter row and columns of B (p x q): ");
    scanf("%d %d", &p, &q);

    if(n != p)
    {
        printf("Multiplication is not possible");
        return 0;
    }
    
    printf("Enter elements in A: \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements in B: \n");
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int t = 0; t < q; t++)
        {
            for(int j = 0; j < p; j++)
            {
                r = a[i][j];
                c = b[j][t];
                k =r*c;
                s = s + k;
            }
            g[i][t] = s;
            s = 0;
        }
    }

    printf("Elements in a are: \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            space(a[i][j]);
        }
        printf("\n");
    }
    printf("Elements in b are: \n");
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            space(b[i][j]);
        }
        printf("\n");
    }
    printf("Elements in g are: \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            space(g[i][j]);
        }
        printf("\n");
    }

    return 0;
}