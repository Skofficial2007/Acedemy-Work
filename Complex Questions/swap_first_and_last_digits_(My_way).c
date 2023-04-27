/*
Write a C program to swap first and last digits of a number.
*/

#include <stdio.h>

void main()
{
    int n, c = 0, a =1;
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);
    int t1 = n; // Temporary variable
    // calculate no. of digits & a is 2^(c-1)
    while(t1 > 0)
    {
        c++;
        t1 = t1/10;
        if(c > 1)
            a = a*10;
    }
    // if n = 12345, c = 5, a = 10000
    int f, l, s = 0, d, r, t = 0; 
    // s for final answer after change
    // r to get every single digit
    // t as count of on which digit are we on Or you can say as index value
    // d as another Temporary variable
    d = n;
    f = d/a; // First Digit
    l = d%10; // Last Digit

    for(int i = 0; i < 2; i++) // Loop to repeat until all three switch conditions done
    {
        switch(i)
        {
            case 0: // case to put l as first variable
            {
                s = s*10 + l;
                d = d/10;
            }

            case 1: // case to print remaining digits of n as it was [very complex]
            {
                if(t == 0) // if t == 0 meaning it's the first digit of n
                {
                    // As we already have our first digit 
                    // That's why we have to remove it from count
                    // i.e: 12345 we only need 234
                    // This condition is to remove 1 from 12345
                    a = a/10; // a = 10000/10 = 1000
                    d = d%a; // 12345 % 1000 = 2345
                    a = a/10; // a = 100
                    t++; // t = 1
                }
                else if(t <= c) // Now it go from 1 to c(5)
                {
                    while(t < c-1) // Lopp till 1 to 4
                    {
                        if(a>=10) // It is for normal digits 2 & 3 from 12345
                            r = d/a; 
                        else // // It is for last digit when a become 0: for 4 in 12345
                            r = d%10;
                        if(r>10) // if we got two digit number i.e 234/10 = 23, there we need this to get 3 from 23
                            r = r%10; 
                        s = s*10 + r;
                        a = a/10;
                        t++;
                    }
                    t++; // From upper loop t = 4 but for last digit we need 5 thats why this
                    if(t == c)
                    {
                        s = s*10 + f;
                    }
                }
            }
        }
    }
    printf("After Swap of f and l: %d", s);
}