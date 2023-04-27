/*
Write a C program to swap first and last digits of a number.
*/

#include <stdio.h>

void main()
{
    int n, t, f, l, c = 0, a=1,d,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;

    // Digit count & no. to 10s
    while(t > 0)
    {
        c++;
        t = t/10;
        if (c>1)
            a=a*10;
    }
    
    l = n%10;
    f = n/a;
    
    while(n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    
    n=s;
    int i=1;s=0;
    
    while(n!=0)
    {
       
        if (i==1)     
        {
            
            d=l;
        }
        else if(i==c)
        {
            d=f;
            printf("d digit is: %d\n%d", d,f);
        }
        else{
            d=n%10;
        }
        s=s*10+d;
        i=i+1;
        n=n/10;
        printf("s digit is: %d\n", s);

    }
 
    printf("First digit is: %d\n", s);

}
