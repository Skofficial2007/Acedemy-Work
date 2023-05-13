/*
Write a program to find the subtract two no. and the answer should always be Positive  
*/

#include <iostream>
#include <cmath>

int main()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << "The answer is: " << a - b << std::endl;
    }
    else
    {
        std::cout << "The answer is: " << b - a << std::endl;
    }
    return 0;
}