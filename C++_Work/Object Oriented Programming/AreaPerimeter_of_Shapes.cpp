/*
Create a class called "Shape" to represent different geometric shapes.
Implement member functions to calculate the area and perimeter of each shape.
*/

#include <iostream>

class Shape
{
    float length, breath, radius, sides;
    float pi = (22.0/7.0);
    public:
        Shape() {}
        Shape(float length, float breath)
        {
            this->length = length;
            this->breath = breath;
        }
        Shape(float radius)
        {
            this->radius = radius;
        }
        float Area_of_Rectangle()
        {
            float area = length * breath;
            return area;
        }
        float Perimeter_of_Rectangle()
        {
            float Perimeter = 2 * (length + breath);
            return Perimeter;
        }
        float Area_of_Circle()
        {
            float area = pi * radius * radius;
            return area;
        }
        float Perimeter_of_Circle()
        {
            float Perimeter = 2 * pi * radius;
            return Perimeter;
        }
};

int main()
{
    Shape rectangle(8.4, 4.7), circle(9.1);
    
    std::cout << "Area of the Rectangle is : " << rectangle.Area_of_Rectangle() << std::endl;
    std::cout << "\nPerimeter of Rectangle is : " << rectangle.Perimeter_of_Rectangle() << std::endl;
    std::cout << "Area of the Circle is : " << circle.Area_of_Circle() << std::endl;
    std::cout << "Perimeter of circle is : " << circle.Perimeter_of_Circle() << std::endl;

    return 0;
}