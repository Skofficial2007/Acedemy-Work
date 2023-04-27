/*
If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], 
your program should be able to find that the
subarray lies between the indexes 3 and 8.
*/

#include <stdio.h>

void main ()
{
    int a[11] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    printf("Elements of array between index 3 to 8\n");
    for(int i = 3; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
}