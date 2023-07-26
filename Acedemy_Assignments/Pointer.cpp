/*
Call by reference in c++
*/

#include <iostream>
using namespace std;

void calculation(int *a, int *b)
{
    int a2, b2;

    a2 = *a + *b;
    b2 = *a - *b;
    
    if(b2 < 0)
    {
        b2 = b2*(-1);
    }

    cout << "Value of a2 is: " << a2 << endl;
    cout << "Value of b2 is: " << b2 << endl;
}

int main()
{
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    calculation(&a, &b);

    return 0;
}