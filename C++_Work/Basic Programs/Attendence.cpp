/*
Write a program to input No. of classes held and No. of Classes attended and print the Attendance 
Percentage
*/

#include <iostream>
#include <cmath>

int main()
{
    int n, c, p;
    std::cout << "Enter the number of classes : ";
    std::cin >> n;
    std::cout << "Enter the number of classes attended : ";
    std::cin >> c;
    p = (c * 100) / n;
    std::cout << "The percentage of classes attended is : " << p << "%" << std::endl;
    return 0;
}