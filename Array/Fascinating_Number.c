/*
Given a number N. Your task is to check whether it is fascinating or not.
Fascinating Number:
When a number(should contain 3 digits or more) is multiplied by 2 and 3,
and when both these products are concatenated with the original number,
then it results in all digits from 1 to 9 present exactly once.
*/

#include <stdio.h>

int main()
{
    int n, a, b, c, i, j, g[100], m, t, loc, temp, count = 0, p = 0;
    long long s= 0;
    printf("Enter a number of 3 or more digits: ");
    scanf("%d", &n);
    a = n;
    b = n*2;
    c = n*3;
    int t1 = b;
    int t2 = c;
    for(i = 0; t1 > 0; i++)
    {
        t1 /= 10;
        a *= 10;
    }
    s = s + a + b;
    for(j = 0; t2 > 0; j++)
    {
        t2 /= 10;
        s *= 10;
    }
    s = s + c;
    printf("b is: %d\n", b);
    printf("c is: %d\n", c);
    printf("After concatenation: %lld\n", s);

    t = s;

    for(int i = 0; t > 0; i++)
    {
        g[i] = t%10;
        t /= 10;
        count++;
    }

    // Selection  Sort
    for(int i = 0; i < count-1; i++)
    {
        m = g[i];
        for(int j = i+1; j < count; j++)
        {
            if(m > g[j])
            {
                m = g[j];
                loc = j;
            }
        }
        if(g[loc] < g[i])
        {
            temp = g[loc];
            g[loc] = g[i];
            g[i] = temp;
        }
    }

    printf("The sorted elements are: ");
    for(int i = 0; i < count; i++)
    {
        printf("%d\t", g[i]);
    }
    printf("\n");

    for(int i = 1; i < 10; i++)
    {
        if(g[i-1] != i)
        {
            printf("%d is not a Fascinating Number", n);
            return 0;
        }
    }

    printf("%d is a Fascinating Number", n);
    return 0;
}