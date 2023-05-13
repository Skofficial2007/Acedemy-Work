/*
Write a program to input age of two people and find Eldest among two. 
*/

#include <iostream>
#include <cmath>

int main()
{

    int age1, age2;
    std::cout << "Enter age of first person: ";
    std::cin >> age1;
    std::cout << "Enter age of second person: ";
    std::cin >> age2;
    if (age1 > age2)
    {
        std::cout << "Eldest person is " << age1 << " years old." << std::endl;
    }
    else
    {
        std::cout << "Eldest person is " << age2 << " years old." << std::endl;
    }
    return 0;
}