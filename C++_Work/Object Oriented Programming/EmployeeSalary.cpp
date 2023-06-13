/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include <iostream>

class Employee
{
    int salary, work_per_day;
    bool flagS, flagW;
    public:
        void getInfo(int salary, int work_per_day)
        {
            this->salary = salary;
            this->work_per_day = work_per_day;
        }
        int AddSal()
        {
            if(salary < 500)
            {
                salary += 10;
                flagS = 1;
            }
            else
            {
                flagS = 0;
            }

            return flagS;
        }
        int AddWork()
        {
            if(work_per_day > 6)
            {
                salary += ((work_per_day - 6)*5);
                flagW = 1;
            }
            else
            {
                flagW = 0;
            }

            return flagW;
        }
        void printSalary()
        {
            if(AddSal())
            {
                std::cout << "Bonus Applied due to low salary" << std::endl;
            }
            if(AddWork())
            {
                std::cout << "Bonus Applied for your overtime" << std::endl;
            }

            std::cout << "Your salary is " << salary << std::endl;
        }
};

int main()
{
    Employee e1, e2, e3;
    e1.getInfo(600, 8);
    e2.getInfo(400, 5);
    e3.getInfo(300, 10);

    std::cout << "Salary of the employees are: " << std::endl;
    e1.printSalary();
    e2.printSalary();
    e3.printSalary();

    return 0;
}