/*
Write a program to find whether entered number is Armstrong or not. 
Example -> 153 = 1^3+5^3+3^3=153 
8208 = 8^4+2^4+0^4+8^4=8208 
*/

#include <iostream>
#include <cmath>

int main()
{
    int num, rem, sum = 0, temp;
    int digits = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    temp = num;
    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    std:: cout << "Digits are: " << digits << std:: endl;

    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        int power = 1;
        for(int k = 0;k < digits; k++)
        {
            power=power*rem;
        }
        sum = sum + power;
        temp = temp / 10;
        std:: cout << "Every time sum is: " << sum << std:: endl;
    }

    std:: cout << "Sum is: " << sum << std:: endl;
    if (sum == num)
        std::cout << "Armstrong number";
    else
        std::cout << "Not an Armstrong number";
    return 0;
}