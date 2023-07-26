#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int x;
    cin >> x;
    v.erase(v.begin() + (x - 1));
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    int size = v.size();
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}