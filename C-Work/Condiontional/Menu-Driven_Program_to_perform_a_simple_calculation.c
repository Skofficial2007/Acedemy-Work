/*
Write a program in C which is a Menu-Driven Program to perform a simple calculation.
*/

#include <stdio.h>

void main()
{
    char o;
    int n;
    float a, b, ans;
    
    printf("Choose From: \n1. '+' \n2. '-' \n3. * \n4. / \n" );
    printf("Enter the operator of your choice: ");
    scanf("%c", &o);
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);
    
    if(o == '+')
    {
        n = 1;
    }
    else if(o == '-')
    {
        n = 2;
    }
    else if(o == '*')
    {
        n = 3;
    }
    else if(o == '/')
    {
        n = 4;
    }
    else
        n = 0;
    
    switch(n)
    {
        case 1:
        {
            ans = a + b;
            printf("Sum is: %f", ans);
            break;
        }
        case 2:
        {
            ans = a - b;
            printf("Subtraction is: %f", ans);
            break;
        }
        case 3:
        {
            ans = a * b;
            printf("Multiflication is: %f", ans);
            break;
        }
        case 4:
        {
            ans = a / b;
            printf("Division is: %f", ans);
            break;
        }
        default:
            printf("Invalid Input");
    }
}


