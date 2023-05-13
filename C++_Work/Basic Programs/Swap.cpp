/*
Write a program to swap two Values 
*/

#include <iostream>
#include <cmath>

int main()
{
    int x, y;
    std::cout << "Enter x : ";
    std::cin >> x;
    std::cout << "Enter y : ";
    std::cin >> y;
    std::cout << "Before Swap" << std::endl;
    std::cout << "x = " << x << " y = " << y << std::endl;
    x = x + y;
    y = x - y;
    x = x - y;
    std::cout << "After Swap" << std::endl;
    std::cout << "x = " << x << " y = " << y << std::endl;

}