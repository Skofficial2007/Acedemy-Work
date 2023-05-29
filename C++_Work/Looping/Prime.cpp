/*
Write a program to find whether entered number is prime or not. 
*/

#include <iostream>

int main()
{
    int n;

    std:: cout << "Enter a number: ";
    std::cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        std::cout << "Entered number " << n << " is a Prime number";
    }
    else
    {
        std::cout << "Entered number " << n << " is not a Prime number";
    }

    return 0;
}