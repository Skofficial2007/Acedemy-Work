/*
Write a Program to print a multiplication Table of the user Choice.
*/

#include <stdio.h>

void main()
{
    int n, i = 1, m;
    printf("Enter Number you want table of: ");
    scanf("%d", &n);

    while(i <= 10)
    {
        m = n*i;
        printf("%d x %d = %d\n", n, i, m);
        i++;
    }
}