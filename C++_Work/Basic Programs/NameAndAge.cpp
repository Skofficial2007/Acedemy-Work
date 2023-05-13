/*
Write a program in C that reads a forename, surname and year of birth and display the names and 
the year one after another sequentially.
*/

#include <iostream>
#include <cmath>
#include <cstring>

int main()
{
    char forename[30];

    char surname[30];
    int birth_year;
    int age;
    std::cout << "Enter your forename: ";
    std::cin.getline(forename, 30);
    std::cout << "Enter your surname: ";
    std::cin.getline(surname, 30);
    std::cout << "Enter your birth year: ";
    std::cin >> birth_year;
    age = (2023 - birth_year);
    std::cout << "Your age is: " << age << std::endl;
    std::cout << "Your name is: " << forename << " " << surname << " " << age << std::endl;
    return 0;
}