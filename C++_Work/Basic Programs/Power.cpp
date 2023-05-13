/*
Write a program to find a^b
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b, result;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    result = pow(a, b);

    std:: cout << "Your result is: " << result << std:: endl;

    return 0;
}