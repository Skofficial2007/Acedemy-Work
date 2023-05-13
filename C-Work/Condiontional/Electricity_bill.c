/*
Write a program in C to calculate and print the Electricity bill of a given customer. The customer id.,
name and unit consumed by the user should be taken from the keyboard and display the total
amount to pay to the customer. The charge are as follow
Unit                                    Charge/unit
upto 199                                @1.20
200 and above but less than 400         @1.50
400 and above but less than 600         @1.80
600 and above                           @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs.
100/-
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char id[60], name[60];
    char s; 
    float u, c, t, sc, bill;
    
    printf("Enter the customer Id: ");
    scanf("%s", id);
    printf("Enter the customer name: ");
    scanf("%s", name);
    printf("Enter the unit consumed: ");
    scanf("%f", &u);
    
    if(u >= 90 && u < 200)
    {
        s = 'N';
        c = 1.20;
        t = u*(c);
        bill = t;
    }
    else if(u >= 200 && u < 400)
    {
        s = 'N';
        c = 1.50;
        t = u*(c);
        bill = t;
    }
    else if(u >= 400 && u < 600)
    {
        s = 'Y';
        c = 1.80;
        t = u*(c);
        sc = (t*15)/100;
        bill = t + sc;
    }
    else if(u >= 600)
    {
        s = 'Y';
        c = 2.0;
        t = u*(c);
        sc = (t*15)/100;
        bill = t + sc;
    }
    
    printf("                    Electricity Bill                    \n");
    printf("Customer ID                 :            %s       \n", id);
    printf("Customer Name               :            %s       \n", name);
    printf("Unit Consumed               :            %.2f     \n", u);
    printf("Applied charge per unit     :            %.2f Rs. \n", c);
    printf("Total Charge without TAX    :            %.2f Rs. \n", t);
    printf("Subcharge Applied or Not    :            %c       \n", s);
    if(s == 'Y')
    {
    printf("Subcharge is                :            %.2f Rs. \n", sc);
    }
    else
    {
    printf("Subcharge is                :               0 Rs. \n");
    }
    printf("Complete Bill is            :            %.2f Rs. \n", bill);
}


