#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void print(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(vector<int>& arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int steps = 1;

    while(left < right)
    {
        cout << "Step: " << steps << endl;
        print(arr);
        steps++;

        while(arr[left] == 0 && left < right)
        {
            left++;
        }

        while(arr[right] == 2 && left < right)
        {
            right--;
        }

        if(arr[left] == 2)
        {
            if(arr[right] == 0)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
            else
            {
                int temp = right;
                int flag = 0;

                // To check if there is any zero in array in between left and right
                while(arr[temp] != 0)
                {
                    temp--;

                    if(left == temp)
                    {
                        flag = 1;
                        break;
                    }
                }

                if(!flag)
                {
                    swap(arr[left], arr[temp]);
                    left++;
                }
                else
                {
                    swap(arr[left], arr[right]);
                    left++;
                    right--;
                }
            }
        }
        else
        {
            if(arr[right] == 0)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
            else
            {
                int temp = right;
                int flag = 0;

                // To check if there is any 2 in array in between left and right
                while(arr[temp] != 0)
                {
                    temp--;

                    if(left == temp)
                    {
                        flag = 1;
                        break;
                    }
                }

                if(!flag)
                {
                    swap(arr[left], arr[temp]);
                    left++;
                }
                else
                {
                    int temp = left;
                    int flag = 0;

                    while(arr[temp] != 2)
                    {
                        temp++;

                        if(right == temp)
                        {
                            flag = 1;
                            break;
                        }
                    }

                    if(!flag)
                    {
                        swap(arr[temp], arr[right]);
                        right--;
                    }
                    else
                    {
                        left++;
                        right--;
                    }
                }
            }
        }
    }
}

int main()
{
    vector<int> arr = {0, 2, 2, 1, 0, 1, 1, 0, 2, 0, 2, 1, 1, 0};

    print(arr);
    cout << "After sorting" << endl;
    sort(arr);
    print(arr);

    return 0;
}