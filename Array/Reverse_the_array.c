/*
Take 10 integer inputs from user and store them in an array. Now, copy all the elements in an another 
array but in reverse order
*/

#include <stdio.h>

const int n = 10;
void main()
{
    int a[n], b[n], c = 0;
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = n-1; i >= 0; i--)
    {
        b[c] = a[i];
        c++;
    }
    printf("Your elements in array b are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}