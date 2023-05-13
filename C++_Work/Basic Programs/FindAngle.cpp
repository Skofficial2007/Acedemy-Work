/*
Write a C program to find the third angle of a right angle triangle if two angles are given. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int x, y, z;
    std::cout << "Enter the 2 angles of the triangle: ";
    std::cin >> x >> y;
    z = 180 - x - y;
    std::cout << "The third angle of the triangle is: " << z;
    return 0;
}