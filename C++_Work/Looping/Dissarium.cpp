/*
Write a program to find whether entered number is Dissarium or not 
*/

#include <iostream>

int main()
{
    int n, sum = 0, temp;
    std::cout << "Enter a number: ";
    std::cin >> n;
    temp = n;
    while (temp > 0)
    {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    if (sum == n)
        std::cout << "Disarium";
    else
        std::cout << "Not a Dissarium";

    return 0;
}