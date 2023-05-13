/*
Write a program to input No. of classes held and No. of Classes attended and find the Attendance 
Percentage and check if He / She can sit in the exam. If the attendance Percentage is less than 75% 
the student is not allowed to sit in the exam.  
*/

#include <iostream>
#include <cmath>

int main()
{
    float n, m;
    std::cout << "Enter the number of classes held : ";
    std::cin >> n;
    std::cout << "Enter the number of classes attended : ";
    std::cin >> m;
    float percentage = ((m / n) * 100);
    std::cout << "Your Percentage is: " << percentage << std::endl;
    if (percentage < 75)
    {
        std::cout << "You are not allowed to sit in the exam." << std::endl;
    }
    else
    {
        std::cout << "You are allowed to sit in the exam." << std::endl;
    }
    return 0;
}