/*
Write a program to input the no. of item from the user and calculate the Total price and then 
give a discount of 10.25% to the user if the purchase quantity is more than 1000. (Per unit 
price is Rs.125.75/-). Print the total amount to be paid by the user. 
*/

#include <stdio.h>

void main()
{
    float n, p, t, d, f;
    printf("The price of the item is: Rs.125.75\n");
    p = 125.75;
    printf("Enter the no. of items : ");
    scanf("%f", &n);
    
    t = p*n;
    d = (t*10.25)/100;
    
    if(n>0)
    {
        if(n > 1000)
        {
            f = t - d;
            printf("The Final total price after discount is: %.2f", f);
        }
        else
        {
            f = t;
            printf("Discount not applicable\n");
            printf("The Final total price is: %.2f", f);
        }
    }
    else
        printf("Invalid Inputs");
        
    
} 
 
 
 
 

