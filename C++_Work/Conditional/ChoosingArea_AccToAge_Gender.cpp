/*
Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their 
place of service. 
if employee is female, then she will work only in urban areas. 
if employee is a male and age is in between 20 to 40 then he may work in anywhere 
if employee is male and age is in between 40 t0 60 then he will work in urban areas only. 
And any other input of age should print "ERROR". 
*/

#include <iostream>
#include <cmath>

int main()
{
    int age;
    char sex;
    char marital_status;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your sex (M or F): ";
    std::cin >> sex;
    std::cout << "Enter your marital status (Y or N): ";
    std::cin >> marital_status;
    if (sex == 'F')
    {
        if (age >= 18)
        {
            std::cout << "You will work in urban areas." << std::endl;
        }
        else
        {
            std::cout << "You will not work in urban areas." << std::endl;
        }
    }
    else if (sex == 'M')
    {
        if (age >= 20 && age <= 40)
        {
            std::cout << "You will work in anywhere." << std::endl;
        }
        else if (age >= 40 && age <= 60)
        {
            std::cout << "You will work in urban areas." << std::endl;
        }
        else
        {
            std::cout << "ERROR" << std::endl;
        }
    }
    else
    {
        std::cout << "ERROR" << std::endl;
    }

    return 0;
}