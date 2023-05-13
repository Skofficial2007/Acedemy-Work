/*
Write a C program to check whether a number is divisible by 5 and 11 or not.  
*/

#include <iostream>
#include <cmath>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num % 5 == 0 && num % 11 == 0)
    {
        std::cout << "The number is divisible by 5 and 11." << std::endl;
    }
    else
    {
        std::cout << "The number is not divisible by 5 and 11." << std::endl;
    }
    return 0;
}