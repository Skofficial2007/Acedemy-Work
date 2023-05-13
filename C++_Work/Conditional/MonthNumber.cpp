/*
Write a C program to input month number and print number of days in that month.  
*/

#include <iostream>
#include <cmath>

int main()
{
    int month;
    std::cout << "Enter month number: ";
    std::cin >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        std::cout << "Number of days in month " << month << " is 31" << std::endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        std::cout << "Number of days in month " << month << " is 30" << std::endl;
    }
    else if (month == 2)
    {
        std::cout << "Number of days in month " << month << " is 28" << std::endl;
    }
    else
    {
        std::cout << "Invalid month number" << std::endl;
    }
    return 0;
}