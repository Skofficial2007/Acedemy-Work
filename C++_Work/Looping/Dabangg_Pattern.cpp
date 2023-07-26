/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of rows: ";
    cin >> n;
    cout << endl;

    int i = 1;
    while(i <= n)
    {
        // 1st Triangle
        int number1 = n - i + 1;
        int count = 1;
        while(count <= number1)
        {
            cout << count << " ";
            count++;
        }

        // 2nd Triangle
        int star1 = ((2 * i) - 2);
        while(star1)
        {
            cout << "*" << " ";
            star1--;
        }

        // 3rd Triangle
        int number2 = n - i + 1;
        int start = number2;
        while(start >= 1)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        i++;
    }

    return 0;
}