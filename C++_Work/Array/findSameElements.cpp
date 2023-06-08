/*
Write a program to check if elements of an array are same or not it read from front 
or back. 
*/

#include <iostream>

int main()
{
    int n, i, j, k, flag = 0;

    std::cout << "Enter the size of array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        std::cout << "Array is same";
    }
    else
    {
        std::cout << "Array is not same";
    }
    
    return 0;
}