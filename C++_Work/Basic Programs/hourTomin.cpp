/*
Write a C program that takes hours and minutes as input, and calculates the total number of minutes
*/

#include <iostream>
#include <cmath>

int main()
{
    int hrs, mins;
    std::cout << "Enter the number of hours : ";
    std::cin >> hrs;
    std::cout << "Enter the number of minutes : ";
    std::cin >> mins;
    int total_mins = hrs * 60 + mins;
    std::cout << "Total minutes : " << total_mins;
    return 0;
}