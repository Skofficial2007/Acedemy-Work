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
    int n, i = 1, b;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    while(i <= n)
    {
        int a = 0;
        int g = n - i;
        b = g;
        while(b > 0)
        {
            printf(" ");
            b -= 2;
        }
        while(a < i)
        {
            printf("*");
            a++;
        }
        printf("\n");
        i += 2;
    }
    return 0;
}

void diamond()
{
    int n, i = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    while(i <= n)
    {
        int g = n - i;
        int b = g;
        int a = 0;
        while(b > 0)
        {
            printf(" ");
            b -= 2;
        }
        while(a < i)
        {
            printf("*");
            a++;
        }
        printf("\n");
        i += 2;
    }
    i = n-1;
    while(i > 0)
    {
        int g = n - i;
        int b = g;
        int a = 0;
        while(b > 0)
        {
            printf(" ");
            b -= 2;
        }
        while(a < i)
        {
            printf("*");
            a++;
        }
        printf("\n");
        i -= 2;
    }
}

void empty_pyramid()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2 == 0)
        n += 1;
    while(i <= n)
    {
        int g = n - i;
        int b = g;
        int a = 0;
        while(b > 0)
        {
            printf(" ");
            b -= 2;
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
            while(a < i)
            {
                if(a == 0 || a == (i-1))
                    printf("*");
                else
                    printf(" ");
                a++;
            }
        }
        printf("\n");
        i += 2;
    }
}

void num_pyramid()
{
    int n, c = 1, i = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    while(i <= n)
    {
        int g = n - i;
        int b = g;
        int a = 0;
        while(b > 0)
        {
            printf(" ");
            b -= 2;
        }
        if(i == 1)
        {
            printf("%d", c);
            c++;
        }
        else
        {
            while(a < i)
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
                a++;
            }
        }
        printf("\n");
        i += 2;
    }
}

void simple_num_pyramid()
{
    int n, c = 1, i = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    while(i < n)
    {
        int g = n - i;
        int b = g;
        int a = 1;
        while(b > 0)
        {
            printf(" ");
            b-=2;
        }
        if(i == 1)
        {
            printf("%d", c);
        }
        else
        {
            while(a <= i)
            {
                if(a%2 == 0)
                    printf(" ");
                else
                    printf("%d", c);
                a++;
            }
        }
        printf("\n");
        i+=2;
    }
}

void Pascal_Triangle_Not_Complete()
{
    int n, c = 1, d = 0, i = 1;
    printf("Enter how big you want your triangle: ");
    scanf("%d", &n);
    while(i < n)
    {
        int g = n - i;
        int b = g;
        int a = 1;
        while(b > 0)
        {
            printf(" ");
            b-=2;
        }
        if(i == 1)
        {
            printf("%d", c);
        }
        else
        {
            while(a <= i)
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
                a++;
            }
        }
        d++;
        printf("\n");
        i+=2;
    }
}

void Pascal_Triangle()
{
    int n, c = 1, i = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    while(i < n)
    {
        int b = 1, a = 0;
        while(b <= (n - i))
        {
            printf("  ");
            b++;
        }
        while(a <= i)
        {
            if (a == 0 || i == 0)
                c = 1;
            else
                c = c * (i - a + 1) / a;
            printf("%4d", c);
            a++;
        }
        printf("\n");
        i++;
    }
}