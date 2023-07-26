#include <iostream>
using namespace std;

int SetBit(int a, int b)
{
    int count = 0;

    while(a != 0)
    {
        if(a&1)
        {
            count++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {
        if(b&1)
        {
            count++;
        }
        b = b >> 1;
    }

    return count;
}

int main()
{
    int a, b;
    cout << "Enter value of a and b: ";
    cin >> a >> b;

    int ans = SetBit(a, b);

    cout << "Number of setbits in a and b are: " << ans << endl;

    return 0;
}
