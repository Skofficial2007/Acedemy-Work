/*
Write a C program to input month number and print number of days in that month.
*/

#include <stdio.h>

void main()
{
    int m;
    printf("Enter month number in b/w 1 to 12: ");
    scanf("%d", &m);
    
    switch(m)
    {
        case 1:
        {
            printf("January");
            printf("\nThere are 31 days in January");
            break;
        }
        case 2:
        {
            printf("February");
            printf("\nThere are 28 days in February is a normal year");
            printf("\n29 days if a leap year");
            break;
        }
        case 3:
        {
            printf("March");
            printf("\nThere are 31 days in March");
            break;
        }
        case 4:
        {
            printf("April");
            printf("\nThere are 30 days in April");
            break;
        }
        case 5:
        {
            printf("May");
            printf("\nThere are 31 days in May");
            break;
        }
        case 6:
        {
            printf("June");
            printf("\nThere are 30 days in June");
            break;
        }
        case 7:
        {
            printf("July");
            printf("\nThere are 31 days in July");
            break;
        }
        case 8:
        {
            printf("August");
            printf("\nThere are 31 days in August");
            break;
        }
        case 9:
        {
            printf("September");
            printf("\nThere are 30 days in September");
            break;
        }
        case 10:
        {
            printf("October");
            printf("\nThere are 31 days in October");
            break;
        }
        case 11:
        {
            printf("November");
            printf("\nThere are 30 days in November");
            break;
        }
        case 12:
        {
            printf("December");
            printf("\nThere are 31 days in December");
            break;
        }
        default:
            printf("Invalid input");
    }
}

