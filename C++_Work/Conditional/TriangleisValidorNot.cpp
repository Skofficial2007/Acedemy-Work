/*
Write a C program to input angles of a triangle and check whether triangle is valid or not. 
*/

#include <iostream>
#include <cmath>

int main()
{
    float a, b, c;
    std::cout << "Enter the angles of the triangle: ";
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        std::cout << "The triangle is valid.";
    }
    else
    {
        std::cout << "The triangle is invalid.";
    }
    return 0;
}