/*
Write C program to find LCM of two numbers
*/

#include <stdio.h>

void main()
{
    int a, b, s;
    printf("Enter two numbers to find there LCM: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        s = a;
    else
        s = b;
    while(1)
    {
        if(s%a == 0 && s%b == 0)
        {
            printf("The Lcm of %d & %d is: %d", a, b, s);
            break;
        }
        ++s;
    }
}