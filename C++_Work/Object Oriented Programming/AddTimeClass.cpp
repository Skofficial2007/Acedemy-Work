/*
Create a class called "Time" to represent time in hours, minutes, and seconds.
Implement member functions to add two time objects and display the result.
*/

#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;
    public:
        Time(int hours, int minutes, int seconds)
        {
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }

        int getHours()
        {
            return hours;
        }

        int getMinutes()
        {
            return minutes;
        }

        int getSeconds()
        {
            return seconds;
        }

        void addTime(Time time)
        {
            this->hours += time.hours;
            this->minutes += time.minutes;
            this->seconds += time.seconds;

            while (this->seconds >= 60)
            {
                this->seconds -= 60;
                this->minutes++;
            }

            while (this->minutes >= 60)
            {
                this->minutes -= 60;
                this->hours++;
            }
        }

        void displayTime()
        {
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
};

int main()
{
    Time time1(10, 30, 15);
    Time time2(5, 45, 30);

    time1.addTime(time2);

    time1.displayTime();

    return 0;
}