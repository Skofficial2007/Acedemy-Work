#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int l, int n)
{
    int a = 0;
    int b = 1;
    int nextElement;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);

    cout << a << " " << b << " ";

    for(int i = 0; i < l; i++)
    {
        nextElement = a + b;
        v.push_back(nextElement);
        cout << nextElement << " ";
        a = b;
        b = nextElement;
    }

    int ans = v[n-1];

    return ans;
}

int main()
{
    int l, n;
    cout << "Enter the length of series: ";
    cin >> l;
    cout << "Enter the term you want: ";
    cin >> n;

    int ans = Fibonacci(l, n);

    cout << "\nThe nth term in Fibonacci series is: " << ans << endl;

    return 0;
}