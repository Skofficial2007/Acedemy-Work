/*
Write a C program to input week number and print week day.
*/

#include <stdio.h>
#include <ctype.h>

void main()
{
    int w;
    printf("Enter Week number in b/w 1 to 7: ");
    scanf("%d", &w);
    
    switch(w)
    {
        case 1:
        {
            printf("Monday");
            break;
        }
        case 2:
        {
            printf("Tuesday");
            break;
        }
        case 3:
        {
            printf("Wednesday");
            break;
        }
        case 4:
        {
            printf("Thursday");
            break;
        }
        case 5:
        {
            printf("Friday");
            break;
        }
        case 6:
        {
            printf("Saturday");
            break;
        }
        case 7:
        {
            printf("Sunday");
            break;
        }
        default:
            printf("Invalid input");
    }
}

