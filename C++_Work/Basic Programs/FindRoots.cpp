/*
Write a program to find the answer of a quadratic equations
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c, d;
    std::cout << "Enter coefficients of quadratic equation: ax^2 + bx + c = 0" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    d = b*b - 4*a*c;

    if(d < 0)
    {
        std::cout << "No real roots" << std::endl;
        return 0;
    }
    else if(d == 0)
    {
        std::cout << "One real root" << std::endl;
    }
    else
    {
        std::cout << "Two real roots" << std::endl;
    }
    
    double x1 = (-b + sqrt(d)) / (2*a);
    double x2 = (-b - sqrt(d)) / (2*a);
    std::cout << "x1: " << x1 << std::endl;
    std::cout << "x2: " << x2 << std::endl;

    return 0;
}