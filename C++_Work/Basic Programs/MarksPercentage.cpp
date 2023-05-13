/*
Write a program to input marks of 5 subjects and find the total marks and Percentage of a student 
*/

#include <iostream>
#include <cmath>

int main()
{
    int marks[5];
    int total = 0;
    int percentage = 0;
    std::cout << "Enter marks of 5 subjects : ";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;
    
    std::cout << "Total marks : " << total << std::endl;
    std::cout << "Percentage : " << percentage << std::endl;

    return 0;
}