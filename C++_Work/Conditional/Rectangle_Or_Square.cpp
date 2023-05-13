/*
Write a program to input two sides of a rectangle and check whether it’s a square or not 
*/

#include <iostream>
#include <cmath>

int main()
{
    int side1, side2;
    std::cout << "Enter the length of the first side: ";
    std::cin >> side1;
    std::cout << "Enter the length of the second side: ";
    std::cin >> side2;
    if (side1 == side2)
    {
        std::cout << "The rectangle is a square." << std::endl;
    }
    else
    {
        std::cout << "The rectangle is not a square." << std::endl;
    }
    return 0;
}