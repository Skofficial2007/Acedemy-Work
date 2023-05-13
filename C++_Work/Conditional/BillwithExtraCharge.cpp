/*
Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., 
name and unit consumed by the user should be taken from the keyboard and display the total 
amount to pay to the customer. The charge are as follow 
Unit Charge/unit 
upto 199 @1.20 
200 and above but less than 400 @1.50 
400 and above but less than 600 @1.80 
600 and above @2.00 
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 
100/- 
*/

#include <iostream>
#include <cmath>

int main()
{
    int unit;
    float charge;
    std::cout << "Enter the unit consumed by the customer: ";
    std::cin >> unit;
    if (unit <= 199)
    {
        charge = 1.20 * unit;
    }
    else if (unit > 199 && unit <= 400)
    {
        charge = 1.50 * unit;
    }
    else if (unit > 400 && unit <= 600)
    {
        charge = 1.80 * unit;
    }
    else if (unit > 600)
    {
        charge = 2.00 * unit;
    }

    if (charge > 400)
    {
        charge = charge + (charge * 0.15);
    }
    if (charge < 100)
    {
        charge = 100;
    }
    std::cout << "The total amount to be paid is Rs. " << charge << std::endl;
    return 0;
}