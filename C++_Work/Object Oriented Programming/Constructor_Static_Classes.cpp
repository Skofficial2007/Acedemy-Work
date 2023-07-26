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
            count++;
            std::cout << "Your Complex Number is " << a << " + " << b << "i" << 
            "\nFor Object number " << count << std::endl;
        }
};

int Complex :: count = 0;

int main()
{
    Complex a(5, 6), b(10, 45);
    a.getData();
    b.getData();
    return 0;
}