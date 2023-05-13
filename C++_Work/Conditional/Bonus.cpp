/*
A Company decided to give bonus of 5% to employee if His / Her Years of service is more than 5 
years of Service. Ask the user for their salary and year of service and print the net bonus amount. 
*/

#include <iostream>
#include <cmath>

int main()
{
    double salary, bonus;
    int ys;
    std::cout << "Enter Salary: ";
    std::cin >> salary;
    std::cout << "Enter Years of Service: ";
    std::cin >> ys;
    if (ys > 5)
        bonus = salary * 0.05;
    else
        bonus = 0;
    std::cout << "Net Bonus: " << bonus << std::endl;
    return 0;
}