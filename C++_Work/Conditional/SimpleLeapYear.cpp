/*
Write a C program to check whether a year is leap year or not. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (year % 4 == 0 && year % 100!= 0 || year % 400 == 0)
    {
        std::cout << "The year is a leap year.";
    }
    else
    {
        std::cout << "The year is not a leap year.";
    }
    return 0;
}