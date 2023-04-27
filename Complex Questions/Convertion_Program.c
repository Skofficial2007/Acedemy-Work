/*
Write a program to convert the following
a.	Binary to Octal
b.	Octal to Binary
c.	Decimal To Binary
d.	Binary to Decimal
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void BinToOct();
void OctToBin();
void DeciToBin();
void BinToDeci();

void main()
{
    int n;
    printf("Enter your choice from following: \n");
    printf("1. Binary to Octal\n2. Octal to Binary\n3. Decimal To Binary\n4. Binary to Decimal");
    printf("\nEnter your choice: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
        {
            BinToOct();
            break;
        }
        case 2:
        {
            OctToBin();
            break;
        }
        case 3:
        {
            DeciToBin();
            break;
        }
        case 4:
        {
            BinToDeci();
            break;
        }
        default:
        {
            printf("Invalid Input");
            exit(0);
        }
    }
}

void DeciToBin()
{
    int n, r, s = 0, i = 1;
    printf("\nEnter a decimal number: ");
    scanf("%d", &n);
    int t = n;
    if(n > 0)
    {
        while(t > 0)
        {
            r = t%2;
            s = s + r*i;
            t = t/2;
            i = i*10;
        }
    }
    else
        printf("\nInvalid Input");

    printf("\nDecimal: %d\nBinary %d", n, s);
}

void BinToDeci()
{
    int n, r, s = 0, c = 0;
    printf("\nEnter a binary number: ");
    scanf("%d", &n);
    int t = n;
    while(t > 0)
    {
        c++;
        r = t%10;
        if(r > 2 || r < 0)
        {
            printf("\nInvlaid Input");
            exit(0);
        }
        t = t/10;
    }
    r = 0;
    t = n;
    int a = 0;
    while(t > 0 && a < c)
    {
        r = t%10;
        if(r == 1)
        {
            s = s + pow(2, a);
            a++;
        }
        else
            a++;
        t = t/10;
    }
    printf("\nBinary: %d\nDecimal: %d", n, s);
}

void BinToOct()
{
    int n, r, s = 0, c = 0;
    printf("\nEnter a binary number: ");
    scanf("%d", &n);
    int t = n;
    while(t > 0)
    {
        c++;
        r = t%10;
        if(r > 2 || r < 0)
        {
            printf("\nInvlaid Input");
            exit(0);
        }
        t = t/10;
    }
    r = 0;
    t = n;
    int a = 0;
    while(t > 0 && a < c)
    {
        r = t%10;
        if(r == 1)
        {
            s = s + pow(2, a);
            a++;
        }
        else
            a++;
        t = t/10;
    }
    int i = 1;
    t = s;
    r = 0;
    int deci = s, s2 = 0;
    while(t > 0)
    {
        r = t%8;
        s2 = s2 + r*i;
        t = t/8;
        i = i*10;
    }
    printf("\nBinary: %d\nDecimal: %d\nOctal: %d", n, deci, s2);
}

void OctToBin()
{
    int n, t, s = 0, r, c = 0;
    printf("\nEnter a Octal number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0)
    {
        c++;
        r = t%10;
        t = t/10;
    }
    int a = 0;
    t = n;
    while(a < c)
    {
        r = t%10;
        s = s + r*pow(8, a);
        a++;
        t = t/10;
    }
    
    int i = 1, s2 = 0;
    r = 0;
    t = s;
    while(t > 0)
    {
        r = t%2;
        s2 = s2 + r*i;
        t = t/2;
        i = i*10;
    }

    printf("\nOctal: %d\nDecimal: %d\nBinary: %d", n, s, s2);
}