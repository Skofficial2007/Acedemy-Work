/*
Take 10 integer inputs from user and store them in an array. Again ask user to give 
a number. Now, tell user whether that number is present in array or not.
*/

#include <iostream>

int main()
{
    int arr[10];
    int n, flag = 0;
    
    for(int i = 0; i < 10; i++)
    {
        std:: cout << "Enter a number in array: ";
        std:: cin >> arr[i];
    }

    std:: cout << "Enter a number to find in given array : ";
    std:: cin >> n;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == n)
        {
            std:: cout << "Element " << arr[i] << " is found at loc " << i+1 << std:: endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        std:: cout << "Element is not in given array";
    }

    return 0;
}