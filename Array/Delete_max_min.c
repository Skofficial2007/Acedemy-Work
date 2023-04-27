/*
Print the left element:
Given a array of length N, at each step it is reduced by 1 element.
In the first step the maximum element would be removed,
while in the second step minimum element of the remaining array would be removed,
in the third step again the maximum and so on.
Continue this till the array contains only 1 element.
And find the final element remaining in the array.
*/

#include <stdio.h>

void main()
{
    int n, a[100], max = 0, min, maxPos, minPos, count = 1;
    char ch;
    printf("Enter No. of elememts needed: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter elements in array: ");
        scanf("%d", &a[i]);
    }

    // To delete duplicate element
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k < n-1; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Elements in array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Main loop to delete max element then min element
    while(1)
    {
        if(n == 1)
        {
            printf("The Final element is: %d", a[0]);
            break;
        }

        printf("Do you want to delete element, Press y or n: ");
        scanf("\n%c", &ch);

        if(ch == 'y')
        {
            if(count%2 != 0)
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i] > max)
                    {
                        max = a[i];
                        maxPos = i;
                    }
                }
                min = max;
                for(int k = maxPos; k < n-1; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                count++;
                printf("Elements in array: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                max = 0;
            }
            else
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i] < min)
                    {
                        min = a[i];
                        minPos = i;
                    }
                }
                for(int k = minPos; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                count++;
                printf("Elements in array: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else
            break;
    }
}