#include <iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int num = Factorial(n);
    int denum = Factorial(r) * Factorial(n-r);

    return num/denum;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;

    int ans = nCr(n, r);
    cout << "Answer is: " << ans << endl;

    return 0;
}