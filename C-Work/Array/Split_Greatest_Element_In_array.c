/*
Take an array of length n where all the numbers are nonnegative and unique.
Find the element in the array possessing the highest value.
Split the element into two parts where first part contains the next highest
value in the array and second part hold the required additive entity to get the highest value.
Print the array where the highest value get splitted into those two parts.
Sample input: 4 8 6 3 2 Sample output: 4 6 2 6 3 2
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, a[100], b[100], h = 0, nh = 0, s = 0, x, p;
    printf("Enter No of elements needed: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d", &a[i]);
        if(a[i] <= 0)
        {
            printf("Invalid Input do it again\n");
            i--;
        }
        else if(i > 1)
        {
            for(int j = 0; j <= i; j++)
            {
                for(int g = j + 1; g <= i; g++)
                {
                    if(a[j] == a[g])
                    {
                        printf("Duplicate Element, Enter a unique one\n");
                        i--;
                    }
                }
            }
        }
    }

    printf("The elements in array before split are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        if(a[i] > h)
        {
            h = a[i];
            p = i;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(h > a[i] && a[i] > nh)
        {
            nh = a[i];
        }
    }

    for(int i = 0; i < h; i++)
    {
        s = nh + i;
        if(s == h)
            x = i;
        else
            s = 0;
    }

    for(int i = 0; i <= n; i++)
    {
        if(i < p)
        {
            b[i] = a[i];
        }
        else if(i == p)
        {
            b[i] = nh;
        }
        else if(i == p+1)
        {
            b[i] = x;
        }
        else
        {
            b[i] = a[i-1];
        }
    }

    printf("The elements in array are: ");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
}