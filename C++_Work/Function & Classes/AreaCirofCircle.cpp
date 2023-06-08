/*
Write a program to print the circumference and area of a circle of radius entered by 
user by defining your own method. 
*/
 
#include <iostream>

class Circle
{
    float r;
    float pi = 22.0/7.0;
    public:
        Circle(int r)
        {
            this->r = r;
            std::cout << "The value of pi is: " << pi << std::endl;
        }

        void Circumference()
        {
            float C = 2 * pi * r;
            std::cout << "The circumference of the circle is: " << C << std::endl;
        }

        void Area()
        {
            float A = pi * r * r;
            std::cout << "The area of the circle is: " << A << std::endl;
        }
};
 
int main()
{
    float r;
    std::cout << "Enter the radius of the Circle: ";
    std::cin >> r;
    Circle C(r);
    std::cout << "What you want to find :" << std::endl;
    std::cout << "1. Circumference\n2. Area\n" << std::endl;
    int n;
    std::cin >> n;

    if(n == 1)
    {
        C.Circumference();
    }
    else if(n == 2)
    {
        C.Area();
    }
    else
    {
        std::cout << "Wrong Input" << std::endl;
    }
 
    return 0;
}