/*
Write a program to find whether entered number is Dissarium or not
Example  175  1^1+7^2+5^3=175
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n, c = 0, t1, t2, r, s = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    t1 = n;
    t2 = n;
    while(t1 > 0)
    {
        c++;
        t1 = t1/10;
    }
    while(t2 > 0)
    {
        r = t2%10;
        s = s + pow(r, c);
        t2 = t2/10;
        c--;
    }
    if(n == s)
        printf("It is a Dissarium number");
    else
        printf("It is not a Dissarium number");
}