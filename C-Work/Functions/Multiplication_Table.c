/*
Print the multiplication table of 15 using recursion. 
*/

#include <stdio.h>

int table(int a, int count, int limit)
{
    int p = a * count;
    printf("\n%d x %d = %d\n", a, count, p);

    if(count == limit)
        return 0;

    table(a, count + 1, limit);
}

int main()
{
    int a = 15, limit;
    int count = 1;

    printf("Enter till what digit do you need the table: ");
    scanf("%d", &limit);

    table(a, count, limit);

    return 0;
}