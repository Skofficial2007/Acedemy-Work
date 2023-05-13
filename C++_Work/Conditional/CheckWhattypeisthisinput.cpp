/*
Write a C program to input any character and check whether it is alphabet, digit or special character using Ascii value.
*/

#include <iostream>
#include <cmath>

int main()
{
    char ch;
    std::cout << "Enter any character: ";
    std::cin >> ch;
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        std::cout << "Alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        std::cout << "Digit";
    }
    else
    {
        std::cout << "Special Character";
    }
    return 0;
}