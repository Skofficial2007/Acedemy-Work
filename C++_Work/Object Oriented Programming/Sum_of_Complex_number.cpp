/*
Create a class called "Complex" to represent complex numbers.
Implement member functions to add two complex numbers and display the result.
*/

#include <iostream>

class Complex
{
    int real, imag;
    public:
        Complex(int real, int imag)
        {
            this->real = real;
            this->imag = imag;
        }
        void Print()
        {
            std::cout << "Your Complex number is: " << real << " + " << imag << "i" << std::endl;
        }
        Complex sum(Complex& obj)
        {
            real = real + obj.real;
            imag = imag + obj.imag;

            Complex c3(real, imag);

            return c3; 
        }
};

int main()
{
    Complex c1(7, 8), c2(-5, 6);
    c1.Print();
    c2.Print();
    Complex c3 = c1.sum(c2);
    c3.Print();

    return 0;
}