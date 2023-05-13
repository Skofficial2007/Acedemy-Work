/*
Write a program to find the Simple Interest(SI=P*R*T/100) 
*/

#include <iostream>
#include <cmath>

int main()
{
    int p, r, t, si;
    std::cout << "Enter the principal : ";
    std::cin >> p;
    std::cout << "Enter the rate : ";
    std::cin >> r;
    std::cout << "Enter the time : ";
    std::cin >> t;

    si = (p * r * t) / 100;

    std::cout << "Simple Interest = " << si << std::endl;

    return 0;
}