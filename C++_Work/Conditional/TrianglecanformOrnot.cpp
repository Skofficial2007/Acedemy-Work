/*
Write a C program to check whether a triangle can be formed by the given value for the angles. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cout << "Enter the value of angles: ";
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        std::cout << "Triangle can be formed";
    }
    else
    {
        std::cout << "Triangle cannot be formed";
    }
    return 0;
}