/*
Define two methods to print the maximum and the minimum number respectively 
among three numbers entered by user.Define a program to find out whether a given 
number is even or odd. 
*/

#include <iostream>

class MaxMin
{
    int a, b;
    public:
        MaxMin(int a, int b)
        {
            this->a = a;
            this->b = b;
        }

        void findMaxMin()
        {
            if(a > b)
            {
                std::cout << "A is greater than B" << std::endl;
            }
            else
            {
                std::cout << "B is greater than A" << std::endl;
            }
        }

        void EvenOdd()
        {
            if(a % 2 == 0)
            {
                std::cout << "A is an even number" << std::endl;
            }
            else
            {
                std::cout << "A is an odd number" << std::endl;
            }

            if(b % 2 == 0)
            {
                std::cout << "B is an even number" << std::endl;
            }
            else
            {
                std::cout << "B is an odd number" << std::endl;
            }
        }
};

int main()
{
    int a, b;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    MaxMin Obj(a, b);
    Obj.findMaxMin();
    Obj.EvenOdd();

    return 0;
}