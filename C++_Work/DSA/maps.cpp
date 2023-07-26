#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int type;
        string name;
        cin >> type >> name;
        switch (type)
        {
        case 1:
        {
            int marks;
            cin >> marks;
            m[name] += marks;
            break;
        }
        case 2:
        {
            m.erase(name);
            break;
        }
        case 3:
        {
            map<string, int>::iterator itr = m.find(name);
            if (itr == m.end())
            {
                cout << 0 << endl;
            }
            else
            {
                cout << m[name] << endl;
            }
            break;
        }
        }
    }
    return 0;
}