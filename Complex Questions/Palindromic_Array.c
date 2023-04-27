/*
Palindromic Array: Given a Integer array A[] of n elements. 
Your task is to complete the function PalinArray. 
Which will return 1, if all the elements of the Array are palindrome otherwise it will return 0.
*/

#include <stdio.h>

void main()
{
    int n, A[100], i, i2, t1, t2, r, s = 0, c = 0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &A[i]);
    }
    for(i2 = 0; i2 < n; i2++)
    {
        t1 = A[i2];
        t2 = A[i2];
        while(t1 > 0)
        {
            r = t1%10;
            s = s*10 + r;
            t1 = t1/10;
        }
        if(s == t2)
            c++;
        s = 0;
        r = 0;
        printf("Array A[%d] = ", i2);
        printf("%d\n", A[i2]);
    }
    if(c == n)
        printf("\nIt is a Palindromic Array");
    else
        printf("\nIt is not a Palindromic Array");
}