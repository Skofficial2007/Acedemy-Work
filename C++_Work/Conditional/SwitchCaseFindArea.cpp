/*
Write a program in C which is a Menu-Driven Program to compute the area of the various 
geometrical shape. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int choice;
    float area;
    std::cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Quadrilateral\n5. Exit\n";
    do
    {
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice)
        {
            case 1:
                std::cout << "Enter the radius of the circle: ";
                float radius;
                std::cin >> radius;
                area = 3.14 * pow(radius, 2);
                std::cout << "Area of the circle is: " << area << std::endl;
                break;
            case 2:
                std::cout << "Enter the length and breadth of the rectangle: ";
                float length, breadth;
                std::cin >> length >> breadth;
                area = length * breadth;
                std::cout << "Area of the rectangle is: " << area << std::endl;
                break;
            case 3:
                std::cout << "Enter the base and height of the triangle: ";
                float base, height;
                std::cin >> base >> height;
                area = 0.5 * base * height;
                std::cout << "Area of the triangle is: " << area << std::endl;
                break;
            case 4:
                std::cout << "Enter the length and breadth of the quadrilateral: ";
                float length1, breadth1;
                std::cin >> length1 >> breadth1;
                std::cout << "Enter the length and breadth of the quadrilateral: ";
                float length2, breadth2;
                std::cin >> length2 >> breadth2;
                area = (length1 * breadth1) + (length2 * breadth2);
                std::cout << "Area of the quadrilateral is: " << area << std::endl;
                break;
            case 5:
                exit(0);
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    }
    while (choice!= 9);
    
    return 0;
}