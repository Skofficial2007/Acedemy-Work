/*
Write a program to perform addition, subtraction, multiplication and division of two numbers
*/

#include <iostream>

int main()
{
    int a, b, result;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    // Addition
    result = a + b;
    std::cout << "The result of addition is: " << result << std::endl;

    // Subtraction
    result = a - b;
    std::cout << "The result of subtraction is: " << result << std::endl;

    // Multiplication
    result = a * b;
    std::cout << "The result of multiplication is: " << result << std::endl;

    // Division
    result = a / b;
    std::cout << "The result of division is: " << result << std::endl;

    return 0;
}