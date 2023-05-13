/*
Write a program in C that takes minutes as input, and display the total number of hours and minutes
*/

#include <iostream>
#include <cmath>

int main()
{
    int min;
    std::cout << "Enter the number of minutes: ";
    std::cin >> min;
    int hrs = min / 60;
    int mins = min % 60;
    std::cout << "The number of hours is: " << hrs << std::endl;
    std::cout << "The number of minutes is: " << mins << std::endl;
    return 0;
}