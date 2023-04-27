/*
Write a program to print all prime number in between 1 to 100.
*/

#include <stdio.h>

void main()
{
    for(int n = 1; n <= 100; n++)
    {
        int c = 0;
        for(int i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                c++;
            }
        }
        if(c == 2)
            printf("%d\n", n);
    }
}