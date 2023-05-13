/*
Print alternate elements of an array: 
You are given an array A of size N. 
You need to print elements of A in alternate order (starting from index 0).
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int t, i, a;
    const int n;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    int A[1000];

    // To enter elements
    for(i = 0; i < n; i++)
    {
        A[i]=rand()%10000;
    }

    // To start printing from a random index value
    do
    {
        i = rand()%1000;
    } while (i >= n);

    // To end printing at a random index value
    do
    {
        t = rand()%1000;
        while(t < i)
            t = t + 5;
    } while(t > n);
    
    // To print array from a random start and end point
    printf("\nElements of the array::");
    while(i <= t)
    {
        i++;
        printf("\nElement number %d::%d",i+1, A[i]);
    }
}