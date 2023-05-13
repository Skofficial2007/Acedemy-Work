/*
Write a C program to find maximum between three numbers.  
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (a > b && a > c)
        std::cout << "Maximum is " << a << std::endl;
    else if (b > a && b > c)
        std::cout << "Maximum is " << b << std::endl;
    else if (c > a && c > b)
        std::cout << "Maximum is " << c << std::endl;
    return 0;
}