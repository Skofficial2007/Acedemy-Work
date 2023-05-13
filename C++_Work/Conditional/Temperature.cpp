/*
Write a C program to read temperature in centigrade and display a suitable message according to 
temperature state below 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot 
*/

#include <iostream>
#include <cmath>

int main()
{
    float temp;
    std::cout << "Enter temperature in centigrade: ";
    std::cin >> temp;
    if (temp < 0)
    {
        std::cout << "Freezing weather";
    }
    else if (temp >= 0 && temp <= 10)
    {
        std::cout << "Very Cold weather";
    }
    else if (temp >= 10 && temp <= 20)
    {
        std::cout << "Cold weather";
    }
    else if (temp >= 20 && temp <= 30)
    {
        std::cout << "Normal in Temp";
    }
    else if (temp >= 30 && temp <= 40)
    {
        std::cout << "Its Hot";
    }
    else
    {
        std::cout << "Its Very Hot";
    }

    return 0;
}