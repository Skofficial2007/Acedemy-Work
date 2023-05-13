/*
Write a C program to input electricity unit charges and calculate total electricity bill according to the
given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h>

void main()
{
    float eu, temp, temp1, temp2, temp3, temp4, t, sc, bill;
    float tf = 50, th = 150, tt = 250;
    printf("Enter the electricity unit: ");
    scanf("%f", &eu);
    temp = eu;

    if(eu <= tf)
    {
        temp1 = eu*(0.50);
        temp2 = 0;
        temp3 = 0;
        temp4 = 0;
    }
    else if(eu <= th)
    {
        temp1 = 50*(0.50);
        eu = eu - 50;
        temp2 = eu*(0.75);
        temp3 = 0;
        temp4 = 0;
    }
    else if(eu <= tt)
    {
        temp1 = 50*(0.50);
        temp2 = 100*(0.75);
        eu = eu - 150;
        temp3 = eu*(1.20);
        temp4 = 0;
    }
    else if(eu > tt)
    {
        temp1 = 50*(0.50);
        temp2 = 100*(0.75);
        temp3 = 100*(1.20);
        eu = eu - 250;
        temp4 = eu*(1.50);
    }

    t = temp1 + temp2 + temp3 + temp4;
    sc = (t*20)/100;
    bill = t + sc;

    printf("For %.2f electricity unit your bill is: %.2f Rs.", temp, bill);
}