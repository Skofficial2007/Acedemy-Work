#include <iostream>

int main()
{
    int n, num, i;
    std:: cout << "Enter the number of elements you need: ";
    std:: cin >> n; 
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        std:: cout << "Enter a number in array: ";
        std:: cin >> arr[i];
    }

    std:: cout << "Enter a number to find in given array : ";
    std:: cin >> num;

    int beg, end, mid;
    beg = 0;
    end = n-1;
    mid = (beg + end)/2;

    for(i = 0; beg <= end; i++)
    {
        if(num == arr[mid])
        {
            std:: cout << "The item " << num << " is found at " << mid << std:: endl;
            break;
        }
        else if(num > arr[mid])
        {
            beg = mid;
            mid = (beg + end)/2;
        }
        else if(num < arr[mid])
        {
            end = mid - 1;
            mid = (beg + end)/2;
        }
    }

    if(i == n)
    {
        std:: cout << "Item not found" << std:: endl;
    }

    return 0;
}