/*
A school has following rules for grading system: 
a. Below 25% - F Grade 
b. 25% to 45% - E Grade 
c. 45% to 50% - D Grade 
d. 50% to 60% - C Grade 
e. 60% to 80% - B Grade 
f. 80% to 90% - A Grade 
g. Above 90% - S Grade 
Ask the User for marks of 5 Subjects and Calculate percentage and then print the Grades according 
to the given conditions 
*/

#include <iostream>
#include <cmath>

int main()
{
    int marks[5];
    float percentage;
    char grade;
    std::cout << "Enter 5 marks : ";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> marks[i];
    }
    percentage = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5.0;
    if (percentage > 90)
    {
        grade = 'S';
    }
    else if (percentage > 80 && percentage <= 90)
    {
        grade = 'A';
    }
    else if (percentage > 60 && percentage <= 80)
    {
        grade = 'B';
    }
    else if (percentage > 50 && percentage <= 60)
    {
        grade = 'C';
    }
    else if (percentage > 45 && percentage <= 50)
    {
        grade = 'D';
    }
    else if (percentage >= 25 && percentage <= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    std::cout << "Your Percentage is : " << percentage << std::endl;
    std::cout << "Your Grade is : " << grade << std::endl;
    return 0;
}