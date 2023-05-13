/*
Write a program to find the area and perimeter of a square.
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, result1, result2;
    std::cout << "Enter the length of a side of square: ";
    std::cin >> a;

    result1 = a * a;
    result2 = 2 * a;

    std::cout << "The area of square is: " << result1 << std::endl;
    std::cout << "The perimeter of square is: " << result2 << std::endl;

    return 0;
}