/*
Factorial of any number
*/

#include <iostream>

int main()
{
    int n, fact = 1;
    std:: cout << "Enter a number: ";
    std:: cin >> n;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    std:: cout << "Factorial of " << n << " is : " << fact << std:: endl;

    return 0;
}