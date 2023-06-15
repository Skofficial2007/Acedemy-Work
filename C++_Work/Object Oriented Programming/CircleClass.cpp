/*
Create a class called "Circle" to represent a circle.
Implement member functions to calculate the area and circumference of a circle, and check if a point lies inside the circle.
*/

#include <iostream>
using namespace std;

class Circle
{
    double radius;
    public:
        Circle(double radius)
        {
            this->radius = radius;
        }

        double getArea()
        {
            return 3.14 * radius * radius;
        }

        double getCircumference()
        {
            return 2 * 3.14 * radius;
        }

        bool contains(double x, double y)
        {
            return (x - radius) * (x - radius) + (y - radius) * (y - radius) <= radius * radius;
        }
};

int main()
{
    Circle circle(5);

    cout << "The area of the circle is: " << circle.getArea() << endl;
    cout << "The circumference of the circle is: " << circle.getCircumference() << endl;

    cout << "Is the point (3, 4) inside the circle? " << std::endl;
    if(circle.contains(3, 4))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}