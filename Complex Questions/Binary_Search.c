/*
Binary Search
*/

#include <stdio.h>

int a[100];
int *p = &a[100];

void binarySearch(int n, int *p, int item)
{
    int f = 0, l = n-1, mid = (f + l)/2, i;

    for(i = 0; f<=l; i++)
    {
        if(item == a[mid])
        {
            printf("Element %d found at %d", item, mid+1);
            break;
        }
        else if(item < a[mid])
        {
            l = mid - 1;
            mid = (f + l)/2;
        }
        else if(item > a[mid])
        {
            f = mid;
            mid = (f + l)/2;
        }
    }
    if(i == n)
    {
        printf("Item not found");
    }

    printf("\nFor loop run for: %d", i);
}

void main()
{
    int n;
    printf("Enter no. of elements needed: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Your elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int temp;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            
        if(a[j] < a[i])
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    }


    printf("Your elements after sorting are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int item;
    printf("Enter a element you want to find: ");
    scanf("%d", &item);

    binarySearch(n, &a[n], item);
}