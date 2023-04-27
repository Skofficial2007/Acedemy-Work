/*
Write a Program to print the Following Series: 
a. 1+2+3+4+5+6+7+... Till n Terms 
b. 0+1+1+2+3+5+8+13+21+33+...Till N terms 
c. 0-1+1-2+3-5+8-13+21-33+... Till n Terms 
d. x^1+x^3+x^5+x^7+x^9+... Till n Terms 
e. 1/2! + 2/3! + 3/4! + 4/5! + ...n Terms 
f. 1^1! + 2^2! +3^3! + ... n Terms 
g. 1+2+4+7+11+16+22+29+ ...n Term 
h. (x^1)/2 + (x^3)/4 + (x^5)/6 + (x^7)/8 + (x^9)/10 + ... Till n terms 
i. 1, 3, 4, 8, 15, 27, 50...
j. 1,22,333,4444 .....
k. 1 +11 + 111 + 1111 + .. n terms 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sum_till_N();
void fibonacci();
void fibonacci2();
void oddpower();
void divideByfactorial();
void powerFactorial();
void addConNumToSum();
void oddPower_evenDivide();
void sumOFFirstThree();
void continous();
void sameNum();

void main()
{
    printf("Enter your choice from following: \n\n");
    printf("1. 1+2+3+4+5+6+7+ ... Till n Terms\n\n");
    printf("2. 0+1+1+2+3+5+8+13+21+33+ ... Till N terms\n\n");
    printf("3. 0-1+1-2+3-5+8-13+21-33+ ... Till n Terms\n\n");
    printf("4. x^1+x^3+x^5+x^7+x^9+ ... Till n Terms\n\n");
    printf("5. 1/2! + 2/3! + 3/4! + 4/5! + ... n Terms\n\n");
    printf("6. 1^1! + 2^2! +3^3! + ... n Terms\n\n");
    printf("7. 1+2+4+7+11+16+22+29+ ... n Term\n\n");
    printf("8. (x^1)/2 + (x^3)/4 + (x^5)/6 + (x^7)/8 + (x^9)/10 + ... Till n terms\n\n");
    printf("9. 1, 3, 4, 8, 15, 27, 50 ...\n\n");
    printf("10. 1,22,333,4444...\n\n");
    printf("11. 1 +11 + 111 + 1111 + .. n terms \n\n");
    int n;
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        {
            sum_till_N();
            break;
        }
        case 2:
        {
            fibonacci();
            break;
        }
        case 3:
        {
            fibonacci2();
            break;
        }
        case 4:
        {
            oddpower();
            break;
        }
        case 5:
        {
            divideByfactorial();
            break;
        }
        case 6:
        {
            powerFactorial();
            break;
        }
        case 7:
        {
            addConNumToSum();
            break;
        }
        case 8:
        {
            oddPower_evenDivide();
            break;
        }
        case 9:
        {
            sumOFFirstThree();
            break;
        }
        case 10:
        {
            continous();
            break;
        }
        case 11:
        {
            sameNum();
            break;
        }
        default:
        {
            printf("Invalid Input");
        }
    }
}

void sum_till_N()
{
    // a. 1+2+3+4+5+6+7+… Till n Terms

    int n, s = 0, i = 0;
    printf("Enter a number till which you need sum: ");
    scanf("%d", &n);
    while(i <= n)
    {
        s = s + i;
        i++;
    }
    printf("Sum is: %d", s);
}

void fibonacci()
{
    // b. 0+1+1+2+3+5+8+13+21+33+…Till N terms

    int n, i = 2, s = 1;
    printf("How many terms do you need in fibonacci series: ");
    scanf("%d", &n);
    int t1 = 0, t2 = 1, t3;
    printf("Fibonacci series upto %d term is: \n", n);
    printf("%d %d", t1, t2);
    while(i<n)
    {
        t3 = t1 + t2;
        printf(" %d", t3);
        t1 = t2;
        t2 = t3;
        s = s + t3;
        i++;
    }
    printf("\nSum is: %d", s);
}

void fibonacci2()
{
    // c. 0-1+1-2+3-5+8-13+21-33+… Till n Terms

    int n, i = 2, s = -1;
    printf("How many terms do you need in fibonacci series: ");
    scanf("%d", &n);
    int t1 = 0, t2 = 1, t3;
    printf("Fibonacci series upto %d term is: \n", n);
    printf("%d %d", t1, t2);
    while(i<n)
    {
        t3 = t1 + t2;
        printf(" %d", t3);
        t1 = t2;
        t2 = t3;
        if(i%2 == 0)
            s = s + t3;
        else
            s = s - t3;
        i++;
    }
    printf("\nFinal output is: %d", s);
}

void oddpower()
{
    // d. x^1+x^3+x^5+x^7+x^9+… Till n Terms 

    int x, n, s = 0, i = 0;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("How long you want power to: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(i%2 != 0)
        {
            s = s + pow(x, i);
        }
        i++;
    }
    printf("Output is: %d", s);
}

void divideByfactorial()
{
    // e. 1/2! + 2/3! + 3/4! + 4/5! + …n Terms

    float n, s = 0, fact = 1, i = 1;
    printf("Enter the number: ");
    scanf("%f", &n);
    while(i<=n)
    {
        float j = i+1;
        while(j>0)
        {
            fact = fact*j;
            j--;
        }
        s = s + (i/fact);
        fact = 1;
        i++;
    }
    printf("Output is: %.2f", s);
}

void powerFactorial()
{
    // f. 1^1! + 2^2! +3^3! + … n Terms

    float n, s = 0, fact = 1, i = 1;
    printf("Enter the number: ");
    scanf("%f", &n);
    while(i<=n)
    {
        float j = i;
        while(j>0)
        {
            fact = fact*j;
            j--;
        }
        s = s + (i*fact);
        fact = 1;
        i++;
    }
    printf("Output is: %.2f", s);
}

void oddPower_evenDivide()
{
    // h. (x^1)/2 + (x^3)/4 + (x^5)/6 + (x^7)/8 + (x^9)/10 + … Till n terms 

    float x, n, s = 0;
    int i = 0;
    printf("Enter value of x: ");
    scanf("%f", &x);
    printf("How long you want power to: ");
    scanf("%f", &n);
    while(i<=n)
    {
        if(i%2 != 0)
        {
            s = s + pow(x, i)/(i+1);
        }
        i++;
    }
    printf("Output is: %.2f", s);
}

void continous()
{
    // j. 1,22,333,4444...

    int n, c = 1, i = 1;
    printf("Enter a number till you want series: ");
    scanf("%d", &n);
    while(i <= n)
    {
        int a = 0;
        while(a < i)
        {
            printf("%d", c);
            a++;
        }
        c++;
        if(i != n)
            printf(", ");
        i++;
    }
}

void addConNumToSum()
{
    // g. 1+2+4+7+11+16+22+29+ … n Term 

    int n, s = 1, i = 1;
    printf("Enter a number till which you need output: ");
    scanf("%d", &n);
    while(i<n)
    {
        s = s + i;
        printf("s is: %d\n", s);
        i++;
    }
    printf("Output is: %d", s);
}

void sumOFFirstThree()
{
    //i. 1, 3, 4, 8, 15, 27, 50... 

    int n, n1 = 1, n2 = 3, n3 = 4, s = 0, i = 0;
    printf("Enter a number till which you need output: ");
    scanf("%d", &n);
    printf("%d, %d, %d, ", n1, n2, n3);
    do
    {
        s = n1 + n2 + n3;
        n1 = n2;
        n2 = n3;
        n3 = s;
        if(i != n-1)
            printf("%d, ", s);
        else
            printf("%d", s);
        i++;
    }
    while(i < n);
}

void sameNum()
{
    int n, c = 1, i = 1;
    printf("Enter a number till you want series: ");
    scanf("%d", &n);
    do
    {
        int a = 0;
        do
        {
            printf("%d", c);
            a++;
        }
        while(a < i);
        if(i != n)
            printf(", ");
        i++;
    }
    while(i <= n);
}