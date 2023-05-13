/*
Write a program to find whether a 4 Digit number is palindrome or not. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int num, rem, rev = 0, temp;
    std::cout << "Enter a 4 digit number: ";
    std::cin >> num;
    temp = num;
    while (temp!= 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (rev == num)
    {
	    std::cout << "The number is palindrome.";
    }
    else
	{
	    std::cout << "The number is not palindrome.";
	}
    return 0;
}