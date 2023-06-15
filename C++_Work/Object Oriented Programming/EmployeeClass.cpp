/*
Create a class called "Employee" to represent an employee.
Implement member functions to calculate the gross salary, deduct taxes, and display the net salary.
*/

#include <iostream>

#include <iostream>

class Employee
{
    const float per_hour_salary;
    int no_of_days_worked;
    float no_of_hour_worked_per_day;
    float taxes;
    float gross_salary;
    float net_salary;
    public:
        Employee(float per_hour_salary) : per_hour_salary(per_hour_salary) {}

        void EnterDays(int no_of_days_worked)
        {
            while (no_of_days_worked > 31)
            {
                std::cout << "Invalid number of days" << std::endl;
                std::cout << "Enter again: ";
                std::cin >> no_of_days_worked;
            }
            this->no_of_days_worked = no_of_days_worked;
        }

        void EnterHours(int no_of_hour_worked_per_day)
        {
            while (no_of_hour_worked_per_day > 12)
            {
                std::cout << "Invalid number of hours" << std::endl;
                std::cout << "Enter again: ";
                std::cin >> no_of_hour_worked_per_day;
            }
            this->no_of_hour_worked_per_day = no_of_hour_worked_per_day;
        }

        float Calculate_gross_salary()
        {
            if (no_of_hour_worked_per_day > 8)
            {
                int bonus = (no_of_hour_worked_per_day - 8);
                std::cout << "You worked hard for " << bonus << " extra hours, so bonus of " << (per_hour_salary * bonus) << " will be added" << std::endl;
                gross_salary = no_of_hour_worked_per_day * no_of_days_worked * per_hour_salary + (per_hour_salary * bonus);
            }
            else
            {
                gross_salary = no_of_hour_worked_per_day * no_of_days_worked * per_hour_salary;
            }

            return gross_salary;
        }

        float tax_applied()
        {
            taxes = gross_salary / 10;
            return taxes;
        }

        float Calculate_net_salary()
        {
            tax_applied();
            net_salary = gross_salary - taxes;
            return net_salary;
        }
};

int main()
{
    int no_of_days_worked;
    float no_of_hour_worked_per_day;
    Employee e1(22.7), e2(20.9);
    e1.EnterDays(25);
    e1.EnterHours(8);
    e2.EnterDays(32);
    e2.EnterHours(13);
    std::cout << "Your gross salary is: " << std::fixed << e1.Calculate_gross_salary() << "$" << std::endl;
    std::cout << "Taxes applied on you are: " << std::fixed << e1.tax_applied() << "$" << std::endl;
    std::cout << "Your net salary is: " << std::fixed << e1.Calculate_net_salary() << "$" << std::endl;

    std::cout << "For Employee 2: " << std::endl;
    std::cout << "Your gross salary is: " << std::fixed << e2.Calculate_gross_salary() << "$" << std::endl;
    std::cout << "Taxes applied on you are: " << std::fixed << e2.tax_applied() << "$" << std::endl;
    std::cout << "Your net salary is: " << std::fixed << e2.Calculate_net_salary() << "$" << std::endl;

    return 0;
}