/*
Write a program check whether a year is Leap or not. 
If a year is divisible by 4 then it’s a leap year but of the year is century year like 2000,21000,1900,… 
then it must be divisible by 400.  
*/

#include <iostream>
#include <cmath>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
		{
            if (year % 400 == 0)
			{
                std::cout << "Leap year";
            }
            else
            {
                std::cout << "Not a leap year";
            }
        }
        else
        {
            std::cout << "Leap year";
        }
    }
    else
    {
        std::cout << "Not a leap year";
    }
    return 0;
}