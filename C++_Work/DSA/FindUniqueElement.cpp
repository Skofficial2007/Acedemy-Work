// There is a array where each element is presented twice in it
// Our goal is to find that single unique element
// We used bitwise operator (^) Xor in it

#include <iostream>
using namespace std;

int UniqueElement(int *arr, int n)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "\nEnter elements in this array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nThe unique element in this array is: " << UniqueElement(arr, n) << endl;

    return 0;
}