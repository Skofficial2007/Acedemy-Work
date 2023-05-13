/*

Compete the skills:
A and B are good friend and programmers.
They are always in a healthy competition with each other.
They decide to judge the best among them by competing.
They do so by comparing their three skills as per their values.
Please help them doing so as they are busy.

Set for A are like [a1, a2, a3]
Set for B are like [b1, b2, b3]

Compare ith skill of A with ith skill of B
if a[i] > b[i] , A's score increases by 1
if a[i] < b[i] , B's score increases by 1
if a[i] = b[i] , nothing happens

*/

#include <stdio.h>

void main()
{
    int a[3], b[3], sa = 0, sb = 0;
    for(int i = 0; i < 3; i++)
    {
        printf("Enter skills value for A: ");
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Enter skills value for B: ");
        scanf("%d", &b[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
            sa++;
        else if(a[i] < b[i])
            sb++;
    }
    printf("Score of A: %d & Score of B: %d", sa, sb);
}