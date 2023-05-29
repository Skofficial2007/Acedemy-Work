/*
Write a program to find whether entered number is Special No. or not.
*/

#include <iostream>

int main()
{
    int n;
    int sum = 0;
    std:: cout << "Enter a number: ";
    std:: cin >> n;

    int temp = n, count = 0;

    while(temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;

    for(int i = 0; i < count; i++)
    {
        int temp2;
        int fact = 1;
        temp2 = temp % 10;
        temp /= 10;
        
        for(int i = 1; i <= temp2; i++)
        {
            fact = fact * i;
        }
        
        std:: cout << "Fact is: " << fact << std:: endl;
        sum = sum + fact;
        std:: cout << "Sum is: " << sum << std:: endl;
    }

    if(sum == n)
    {
        std:: cout << "Entered number is a Special No.";
    }

    return 0;
}