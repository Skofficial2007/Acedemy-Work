#include <iostream>
using namespace std;

int AP(int n)
{
    return ((3*n) + 7);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = AP(n);
    cout << "The Answer is: " << ans << endl;

    return 0;
}