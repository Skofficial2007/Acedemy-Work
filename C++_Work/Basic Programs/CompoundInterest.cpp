/*
Write a Program to Calculate compound interest. 
*/

#include <iostream>
#include <cmath>

int main()
{
    float principal, rate, time, compound, compound_interest;
    std::cout << "Enter principal : ";
    std::cin >> principal;
    std::cout << "Enter rate : ";
    std::cin >> rate;
    std::cout << "Enter time : ";
    std::cin >> time;
    compound = pow((1 + rate / 100), time);
    compound_interest = principal * compound;
    std::cout << "Compound Interest : " << compound_interest;
    return 0;
}