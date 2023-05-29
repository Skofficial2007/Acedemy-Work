/*
Write a program to find greatest common divisor (GCD) or highest common factor (HCF) of given 
two numbers.
*/

#include <iostream>

int main()
{
    int a, b, c;
    int t1, t2;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    t1 = a;
    t2 = b;
    c = a % b;
    while (c!= 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    std::cout << "GCD of " << t1 << " and " << t2 << " is " << b << std::endl;
    return 0;
}