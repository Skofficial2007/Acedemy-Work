/*
Create a class called "Rectangle" to represent rectangles.
Implement member functions to calculate the area and perimeter of a rectangle.
Also, create a static member variable to keep track of the number of rectangle objects created.
*/

#include <iostream>

class Rectangle
{
    int length, breath, area, perameter;

public:
    static int count;
    Rectangle(int length, int breath)
    {
        this->length = length;
        this->breath = breath;
        count++;
    }
    int Area()
    {
        area = length * breath;
        std::cout << "The Area of the rectangle is: " << area << std::endl;
    }
    int Perameter()
    {
        perameter = 2 * (length + breath);
        std::cout << "The Perameter of the rectangle is: " << perameter << std::endl;
    }
};

int Rectangle::count = 0;

int main()
{
    Rectangle r(7, 5);
    r.Area();
    r.Perameter();

    Rectangle r2(4, 6);

    std::cout << "The number of object created are: " << Rectangle::count << std::endl;

    return 0;
}