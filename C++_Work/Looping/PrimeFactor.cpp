/*
Write a program to find prime factor of a number. If a factor of a number is prime number then it is
its prime factor.
*/

#include <iostream>
#include <cmath>
using namespace std;

int isPrimeFactor(int n)
{
    int p;
    for (p = 2; p <= n / 2; p++)
    {
        if (n != p)
        {
            if (n % p == 0)
            { // Notprime
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int i, j;
    cout << "Enter your Number" << endl;
    cin >> i;
    cout << "The prime factors of the number which are prime are :" << endl;
    for (j = 2; j <= i / 2; j++)
    {
        if (i % j == 0)
        {

            if (isPrimeFactor(j) == true)
            {
                cout << j << endl;
            }
        }
    }

    return 0;
}