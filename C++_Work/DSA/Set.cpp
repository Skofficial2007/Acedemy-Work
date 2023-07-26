#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int x, y;
        cin >> y;
        if (y == 1)
        {
            cin >> x;
            s.insert(x);
        }
        else if (y == 2)
        {
            cin >> x;
            s.erase(x);
        }
        else if (y == 3)
        {
            cin >> x;
            set<int>::iterator it = s.find(x);
            if (it == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}