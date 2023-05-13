/*
Write a C program to check whether a character is alphabet or not. 
*/

#include <iostream>
#include <cmath>

int main()
{
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        std::cout << "The character is an alphabet.";
    }
    else
    {
        std::cout << "The character is not an alphabet.";
    }

    return 0;
}