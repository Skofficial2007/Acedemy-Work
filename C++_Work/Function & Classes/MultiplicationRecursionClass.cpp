/*
Print the multiplication table of a number using recursion.
*/
 
#include <iostream>
 
class MultiTable
{
    int num, temp = 1;
    public:
        MultiTable(int num)
        {
            this->num = num;
        }

        void Multiplication()
        {
            std::cout << num << " * " << temp << " = " << num*temp << std::endl;
            temp++;
            if(temp <= 10)
            {
                Multiplication();
            }
        }
};

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    MultiTable N(num);
    N.Multiplication();
 
    return 0;
}