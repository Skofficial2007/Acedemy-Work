/*
Write a program to print the factorial of a number by defining a method named 
'Factorial'.
*/
 
#include <iostream>

class Factorial
{
    int fact = 1;
    int num;
    public:
        Factorial(int num)
        {
            this->num = num;
        }

        void FindFactorial()
        {
            int temp = num;
            while(temp != 0)
            {
                fact = fact * temp;
                temp--;
            }
            std::cout << "Factorial of the number " << num << " is: " << fact << std::endl;
        }
};
 
int main()
{
    int num;
    std::cout << "The number is: ";
    std::cin >> num;

    Factorial F(num);
    F.FindFactorial();

    return 0;
}