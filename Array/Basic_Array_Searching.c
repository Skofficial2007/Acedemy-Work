/*
Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell 
user whether that number is present in array or not. 
*/

#include <stdio.h>

const int n = 10;
int main()
{
    int a[n], b;
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a element you want to check if it's in array or not: ");
    scanf("%d", &b);
    for(int i = 0; i < n; i++)
    {
        if(b == a[i])
        {
            printf("Your element %d is found at index: %d & at position: %d", b, i, i+1);
            return 0;
        }
    }
    printf("Entered element is not in array");
    return 0;
}