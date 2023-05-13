/*
Write a program to input a 4 digit no. from the user and find the reverse of the no.
*/

#include <iostream>
#include <cmath>

int main()
{
    int n, rev = 0;
    std::cout << "Enter a 4 digit no. : ";
    std::cin >> n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    std::cout << "Reverse of the no. is : " << rev;
    return 0;
}