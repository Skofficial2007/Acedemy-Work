#include <stdio.h>
#include <stdlib.h>

int pyramid();
void empty_pyramid();
void num_pyramid();
void Pascal_Triangle();
void diamond();
void simple_num_pyramid();
void Pascal_Triangle_Not_Complete();

void main()
{
    int n;
    printf("Enter your choice from following: \n");
    printf("1. Star Pyramid\n2. Center empty pyramid\n3. Star Diamond\n");
    printf("4. Number Pyramid\n5. Simple N0. Pyramid of 1's\n");
    printf("6. Pascal Triangle Failed Attempt\n7. Pascal Triangle\n8. Exit\n");

    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            {
                pyramid();
                break;
            }
            case 2:
            {
                empty_pyramid();
                break;
            }
            case 3:
            {
                diamond();
                break;
            }
            case 4:
            {
                num_pyramid();
                break;
            }
            case 5:
            {
                simple_num_pyramid();
                break;
            }
            case 6:
            {
                Pascal_Triangle_Not_Complete();
                break;
            }
            case 7:
            {
                Pascal_Triangle();
                break;
            }
            case 8:
            {
                exit(0);
            }
            default:
                printf("Invalid Input");
        }
    }
}

int pyramid()
{
    int n;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i += 2)
    {
        int g = n - i;
        for(int b = g; b > 0; b -= 2)
        {
            printf(" ");
        }
        for(int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

void diamond()
{
    int n;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i += 2)
    {
        int g = n - i;
        for(int b = g; b > 0; b -= 2)
        {
            printf(" ");
        }
        for(int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1; i > 0; i -= 2)
    {
        int g = n - i;
        for(int b = g; b > 0; b -= 2)
        {
            printf(" ");
        }
        for(int a = 0; a < i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void empty_pyramid()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2 == 0)
        n += 1;
    for(int i = 1; i <= n; i += 2)
    {
        int g = n - i;
        for(int b = g; b > 0; b -= 2)
        {
            printf(" ");
        }
        if(i == n)
        {
            for(int a = 0; a < i; a++)
            {
                printf("*");
            }
        }
        else
        {
            for(int a = 0; a < i; a++)
            {
                if(a == 0 || a == (i-1))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}

void num_pyramid()
{
    int n, c = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i += 2)
    {
        int g = n - i;
        for(int b = g; b > 0; b -= 2)
        {
            printf(" ");
        }
        if(i == 1)
        {
            printf("%d", c);
            c++;
        }
        else
        {
            for(int a = 0; a < i; a++)
            {
                if(c > 9)
                    c = 0;
                if(a < i/2)
                {
                    printf("%d", c);
                    c++;
                }
                else
                {
                    printf("%d", c);
                    if(a != (i-1))
                        c--;
                    else
                        c++;
                    if(c<0)
                        c = c*(-1);
                }
            }
        }
        printf("\n");
    }
}

void simple_num_pyramid()
{
    int n, c = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = 1; i < n; i+=2)
    {
        int g = n - i;
        for(int b = g; b > 0; b-=2)
        {
            printf(" ");
        }
        if(i == 1)
        {
            printf("%d", c);
        }
        else
        {
            for(int a = 1; a <= i; a++)
            {
                if(a%2 == 0)
                    printf(" ");
                else
                    printf("%d", c);
            }
        }
        printf("\n");
    }
}

void Pascal_Triangle_Not_Complete()
{
    int n, c = 1, d = 0;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    for(int i = 1; i < n; i+=2)
    {
        int g = n - i;
        for(int b = g; b > 0; b-=2)
        {
            printf(" ");
        }
        if(i == 1)
        {
            printf("%d", c);
        }
        else
        {
            for(int a = 1; a <= i; a++)
            {
                if(a%2 == 0)
                    printf(" ");
                else if(a == 1 || a == i)
                    printf("%d", c);
                else
                {
                    if(a == 3 || a == (i-2))
                        printf("%d", d);
                    else
                    {
                        printf("*");
                    }
                }
            }
        }
        d++;
        printf("\n");
    }
}

void Pascal_Triangle()
{
    int n, c = 1, b, i, a;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (b = 1; b <= n - i; b++)
            printf("  ");
        for (a = 0; a <= i; a++)
        {
            if (a == 0 || i == 0)
                c = 1;
            else
                c = c * (i - a + 1) / a;
            printf("%4d", c);
        }
        printf("\n");
    }
}