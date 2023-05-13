/*
Write a C program to find maximum between two numbers. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (a > b)
        std::cout << "Maximum is " << a << std::endl;
    else
        std::cout << "Maximum is " << b << std::endl;
    return 0;
}