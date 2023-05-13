/*
Write a C program to check whether a number is even or odd. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num % 2 == 0)
        std::cout << "The number is even." << std::endl;
    else
        std::cout << "The number is odd." << std::endl;

    return 0;
}