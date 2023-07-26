#include <iostream>

class Complex
{
    int a, b;
    static int count;
    public:
        Complex(){}
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }

        void getData(void)
        {
            std::cout << "Your Complex Number is " << a << " + " << b << "i" << std::endl;
        }

        static void getCount(void)
        {
            count++;
            std::cout << "For Object number " << count << std::endl;
        }

        void sumofComplex(Complex o1, Complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        } 
};

int Complex :: count = 0;

int main()
{
    Complex a(5, 6), b(10, 45), c;
    a.getData();
    Complex::getCount();
    b.getData();
    Complex::getCount();
    
    std::cout<< "Sum of these two complex numbers are: " << std::endl;
    c.sumofComplex(a, b);
    c.getData();
    c.getCount();

    return 0;
}