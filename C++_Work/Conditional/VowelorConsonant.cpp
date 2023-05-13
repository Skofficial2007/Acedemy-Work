/*
Write a C program to input any alphabet and check whether it is vowel or consonant.
*/

#include <iostream>
#include <cmath>

int main()
{
    char ch;
    std::cout << "Enter any alphabet: ";
    std::cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        std::cout << "Vowel";
    }
    else
    {
        std::cout << "Consonant";
    }
    return 0;
}