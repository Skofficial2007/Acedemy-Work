/*
Swap kth elements:
Given an array Arr of size N, swap the Kth element from beginning with Kth element from end.
N = 8, K = 3
Arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
Output: 1 2 6 4 5 3 7 8
Explanation: Kth element from beginning is
3 and from end is 6.
*/

#include <stdio.h>

void main()
{
    int a[100], n, k, temp;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d", &a[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    temp = a[k-1];
    a[k-1] = a[n-k];
    a[n-k] = temp;
    printf("Your elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}