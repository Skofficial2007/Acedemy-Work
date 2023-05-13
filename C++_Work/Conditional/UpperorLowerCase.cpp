/*
Write a C program to check whether a character is uppercase or lowercase alphabet. 
*/

#include <iostream>
#include <cmath>

int main()
{
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        std::cout << "The character is lowercase alphabet.";
    else if (ch >= 'A' && ch <= 'Z')
        std::cout << "The character is uppercase alphabet.";
    else
        std::cout << "The character is not alphabet.";
    return 0;
}