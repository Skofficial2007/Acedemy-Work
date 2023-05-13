/*
Write a program to find the volume of Cone 
*/

#include <iostream>
#include <cmath>

int main()
{
    float radius, height, volume;
    std::cout << "Enter radius and height of cone : ";
    std::cin >> radius >> height;
    volume = (4 / 3) * 3.14 * pow(radius, 2) * height;
    std::cout << "Volume of cone is : " << volume;
    return 0;
}