/*
Write a program to print the Following patterns:
*/

#include <stdio.h>
#include <stdlib.h>

void star();
void same_num();
void con_num();
void con_con_num();
void same_alp();
void con_alp();
void con_con_alp();

void main()
{
    int n;
    printf("Enter your choice of design from following choices: \n");
    printf(" 1.\t****\n\t***\n\t**\n\t*\n 2.\t1234\n\t123\n\t12\n\t1\n");
    printf(" 3.\t1111\n\t222\n\t33\n\t4\n 4.\t1234\n\t567\n\t89\n\t0\n");
    printf(" 5.\tabcd\n\tabc\n\tab\n\ta\n 6.\taaaa\n\tbbb\n\tcc\n\td\n");
    printf(" 7.\tabcd\n\tefgh\n\tij\n\tk\n 8.\tExit\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            {
                star();
                break;
            }
            case 2:
            {
                con_num();
                break;
            }
            case 3:
            {
                same_num();
                break;
            }
            case 4:
            {
                con_con_num();
                break;
            }
            case 5:
            {
                con_alp();
                break;
            }
            case 6:
            {
                same_alp();
                break;
            }
            case 7:
            {
                con_con_alp();
                break;
            }
            case 8:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("Invalid Input");
            }
        }
    }
}

void star()
{
    int n;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        for(int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void same_num()
{
    int n, c = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        for(int a = 0; a < i; a++)
        {
            printf("%d", c);
        }
        c++;
        printf("\n");
    }
}

void con_num()
{
    int n, c;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        c = 1;
        for(int a = 0; a < i; a++)
        {
            printf("%d", c);
            c++;
        }
        printf("\n");
    }
}

void con_con_num()
{
    int n, c = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        for(int a = 0; a < i; a++)
        {
            if(c > 9)
            {
                c = c%10;
                printf("%d", c);
            }
            else
                printf("%d", c);
            c++;
        }
        printf("\n");
    }
}

void same_alp()
{
    int n, c = 97;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        for(int a = 0; a < i; a++)
        {
            printf("%c", c);
        }
        c++;
        printf("\n");
    }
}

void con_alp()
{
    int n;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        int c = 97;
        for(int a = 0; a < i; a++)
        {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
}

void con_con_alp()
{
    int n, c = 97;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        for(int a = 0; a < i; a++)
        {
            if(c == 123)
            {
                c = 97;
                printf("%c", c);
            }
            else
                printf("%c", c);
            c++;
        }
        printf("\n");
    }
}