/*
Write a program to find the Volume of Sphere
*/

#include <iostream>
#include <cmath>

int main()
{
    float radius, volume;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    volume = 4 / 3 * 3.14 * radius * radius * radius;
    std::cout << "Volume: " << volume << std::endl;
    return 0;
}