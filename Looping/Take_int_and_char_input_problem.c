/*
Take integer inputs from user until he/she presses q ( Ask to press q to quit after every
integer input ). Print average and product of all numbers.
*/

#include <stdio.h>

void main()
{
    int n, avg = 0, p = 1;
    char c;
    do
    {
        printf("Enter value of n: ");
        scanf("\n%d", &n);
        avg = avg + n;
        p = p*n;
        printf("Press any key to continue Or 'q' to Quit: ");
        scanf("\n%c", &c);
    }
    while (c != 'q');
    
    printf("The average value of all the values: %d\n", avg);
    printf("Product of all the values are: %d", p);
}