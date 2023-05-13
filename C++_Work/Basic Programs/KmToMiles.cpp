/*
Write a C program that converts kilometers per hour to miles per hour 
*/

#include <iostream>
#include <cmath>

int main()
{
    float kilometers, miles;
    std::cout << "Enter kilometers per hour: ";
    std::cin >> kilometers;
    miles = kilometers / 1.609;
    std::cout << kilometers << " km/h is " << miles << " mph." << std::endl;
    return 0;
}