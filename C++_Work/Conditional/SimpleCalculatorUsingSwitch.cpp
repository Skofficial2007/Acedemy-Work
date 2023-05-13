/*
Write a program in C which is a Menu-Driven Program to perform a simple calculation. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int choice;
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n" << std::endl;


    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        c = a + b;
        std::cout << "The sum of " << a << " and " << b << " is " << c << std::endl;
        break;
    case 2:
        d = a - b;
        std::cout << "The difference of " << a << " and " << b << " is " << d << std::endl;
        break;
    case 3:
        e = a * b;
        std::cout << "The product of " << a << " and " << b << " is " << e << std::endl;
        break;
    case 4:
        f = a / b;
        std::cout << "The quotient of " << a << " and " << b << " is " << f << std::endl;
        break;
    default:
        std::cout << "Invalid choice" << std::endl;
        break;
    }

    return 0;

}