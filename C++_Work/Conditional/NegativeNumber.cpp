/*
Write a program to find whether a entered no. is Negative or not  
*/

#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n < 0)
    {
        std::cout << "Negative";
    }
    else
    {
        std::cout << "Positive";
    }

    return 0;
}