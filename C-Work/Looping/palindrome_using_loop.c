/*
Write a program to find whether entered number is palindrome or not.
Example  1221
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int num, temp, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        r = num%10;
        sum = (sum*10) + r;
        num = num/10;
    }
    if(sum == temp)
    {
        printf("It is a palindrome number");
    }
    else
        printf("It is not a palindrome number");
}