/*
Using recursion, define a method to know nth term of a Fibonacci series. 
*/
 
#include <iostream>

class Fibonacci
{
    int num;
    public:
        Fibonacci(int num) : num(num) {}

        void series()
        {
            int F = 1;
            for(int i = 1; i < num; i++)
            {
                if(i == 1)
                {
                    std::cout << F << ", ";
                }
                else
                {
                    F = (i - 1) + (i - 2);
                    std::cout << F << ", ";
                }
            }
        }
};

int main()
{
    int num;
    std::cout << "Enter how long series do you need: ";
    std::cin >> num;

    Fibonacci F(num);
    F.series();
 
    return 0;
}