/*
Write a program to find whether entered number is palindrome or not. 
Example 1221
*/

#include <iostream>

int main()
{
    int n, r, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    r = n;
    while (r!= 0)
    {
        sum = sum * 10 + r % 10;
        r = r / 10;
    }
    if (sum == n)
    {
        std::cout << "Palindrome";
    }
    else
    {
        std::cout << "Not Palindrome";
    }
    return 0;
}