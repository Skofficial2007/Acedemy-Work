/*
Find largest and smallest elements of an array.
*/

#include <iostream>

int main()
{
    int n, i;
    std:: cout << "Enter the number of elements you need: ";
    std:: cin >> n; 
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        std:: cout << "Enter a number in array: ";
        std:: cin >> arr[i];
    }

    int larger = 0;
    int smallest = 100;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > larger)
        {
            larger = arr[i];
        }
        else if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    std:: cout << "The largest number in array is: " << larger << std:: endl;
    std:: cout << "The smallest number in array is: " << smallest << std:: endl;

    return 0;
}