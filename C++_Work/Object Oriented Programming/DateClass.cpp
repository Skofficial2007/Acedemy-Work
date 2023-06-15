/*
Create a class called "Date" to represent a date (day, month, year).
Implement member functions to compare two dates and check if a given year is a leap year.
*/

#include <iostream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    bool isLeapYear()
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

    bool operator<(const Date &other) const
    {
        if (year < other.year)
        {
            return true;
        }
        else if (year == other.year)
        {
            if (month < other.month)
            {
                return true;
            }
            else if (month == other.month)
            {
                return day < other.day;
            }
        }
        return false;
    }

    bool operator==(const Date &other) const
    {
        return year == other.year && month == other.month && day == other.day;
    }
};

int main()
{
    Date date1(1, 1, 2023);
    Date date2(2, 2, 2023);
    cout << (date1 < date2) << endl;
    cout << (date1 == date2) << endl;
    cout << date1.isLeapYear() << endl;
    return 0;
}