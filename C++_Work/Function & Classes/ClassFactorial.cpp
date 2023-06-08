/*
Write a program to print the factorial of a number by defining a method named 
'Factorial'.
*/

#include <iostream>

class Factorial
{
    int n;
    int fact = 1;
    public:
        Factorial(int n)
        {
            this->n = n;
        }

        int FactorialofNum()
        {
            for(int i = 1; i <= n; i++)
            {
                fact *= i;
            }
        }

        void Display()
        {
            std::cout << "Factorial of " << n << " is " << fact << std::endl;
        }
};

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    Factorial obj(num);
    obj.FactorialofNum();
    obj.Display();

    return 0;
}