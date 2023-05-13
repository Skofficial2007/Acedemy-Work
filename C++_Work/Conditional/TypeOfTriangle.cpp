/*
Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cout << "Enter the length of the sides of the triangle: ";
    std::cin >> a >> b >> c;
    if (a == b && b == c)
    {
        std::cout << "The triangle is equilateral.";
    }
    else if (a == b || b == c || a == c)
    {
        std::cout << "The triangle is isosceles.";
    }
    else if (a!= b && b!= c && a!= c)
    {
        std::cout << "The triangle is scalene.";
    }
    return 0;
}