/*
Write a program to Convert Celsius To Fahrenheit
*/

#include <iostream>
#include <cmath>

int main()
{
    float celsius, fahrenheit;
    std::cout << "Enter Celsius : ";
    std::cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    std::cout << "Fahrenheit : " << fahrenheit;
    return 0;
}