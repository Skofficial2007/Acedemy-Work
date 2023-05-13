/*
Write a C program to check whether a number is negative, positive or zero. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num < 0)
        std::cout << "Negative";
    else if (num > 0)
        std::cout << "Positive";
    else
        std::cout << "Zero";
    return 0;
}