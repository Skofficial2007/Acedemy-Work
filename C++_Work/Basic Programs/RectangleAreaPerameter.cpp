/*
Write a program to find the area and perimeter of a Rectangle
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b, result1, result2;
    std::cout << "Enter the length of rectangle: ";
    std::cin >> a;
    std::cout << "Enter the breath of rectangle: ";
    std::cin >> b;

    result1 = (a * b);
    result2 = (2 * (a + b));

    std:: cout << "Your area is: " << result1 << std:: endl;
    std:: cout << "Your perimeter is: " << result2 << std:: endl;

    return 0;
}