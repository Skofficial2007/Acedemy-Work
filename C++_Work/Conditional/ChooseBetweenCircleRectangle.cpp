/*
Given an integer choice denoting the choice of the user and a list containing the single value R or two 
values L and B depending on the choice. 
If the user's choice is 1, calculate the area of the circle having the given radius(R). 
Else if choice is 2, calculate the area of the rectangle with given length(L) and breadth(B).  
*/

#include <iostream>
#include <cmath>

int main()
{
    int choice;
    float radius, length, breadth;
    std::cout << "Enter your choice: 1 for circle, 2 for rectangle: ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        float area = 3.14 * pow(radius, 2);
        std::cout << "Area of the circle is: " << area << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "Enter the length of the rectangle: ";
        std::cin >> length;
        std::cout << "Enter the breadth of the rectangle: ";
        std::cin >> breadth;
        float area = length * breadth;
        std::cout << "Area of the rectangle is: " << area << std::endl;
    }
    else
    {
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}