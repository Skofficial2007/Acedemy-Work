/*
2D-Array 
*/

#include <stdio.h>

void main()
{
    int a[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements in array are: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}