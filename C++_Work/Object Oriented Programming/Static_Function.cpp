#include <iostream>

class Complex
{
    int a, b;
    static int count;
    public:
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
};

int Complex :: count = 0;

int main()
{
    Complex a(5, 6), b(10, 45);
    a.getData();
    Complex::getCount();
    b.getData();
    Complex::getCount();
    return 0;
}