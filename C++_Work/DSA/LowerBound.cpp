#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int x;
        cin >> x;
        decltype(v)::iterator it = lower_bound(v.begin(), v.end(), x);
        if (*it == x)
        {
            cout << "Yes " << (it - v.begin() + 1) << endl;
        }
        else
        {
            auto it = lower_bound(v.begin(), v.end(), x);
            cout << "No " << (it - v.begin() + 1) << endl;
        }
    }

    return 0;
}