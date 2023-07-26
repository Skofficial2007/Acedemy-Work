#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool UniqueOccurrences(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int temp = arr[0];
    vector<int> v;
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == temp)
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count = 0;
            temp = arr[i];
            i--;
        }

        if(i == size - 1)
        {
            v.push_back(count);
        }
    }

    sort(v.begin(), v.end());
    int n = v.size();
    int ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        ans = v[i] ^ v[i+1];

        if(!ans)
        {
            return false;
        }
        else
        {
            ans = 0;
        }
    }

    return true;
}

int main()
{
    vector<int> arr;
    int n;
    int temp;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements in the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "\nDoes this array has unique number of occurrences: ";
    if(UniqueOccurrences(arr))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}