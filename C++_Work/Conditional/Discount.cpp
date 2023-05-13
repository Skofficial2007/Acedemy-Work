/*
Write a program to input the no. of item from the user and calculate the Total price and then give a 
discount of 10.25% to the user if the purchase quantity is more than 1000. (Per unit price is 
Rs.125.75/-). Print the total amount to be paid by the user. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int n, q;
    float p, t, d;
    std::cout << "Enter the no. of item : ";
    std::cin >> n;
    std::cout << "Enter the quantity : ";
    std::cin >> q;
    std::cout << "Enter the price : ";
    std::cin >> p;
    t = p * q;
    d = t * .10;
    if (q > 1000 && p > 125.75)
    {
        std::cout << "Discount : " << d << std::endl;
        std::cout << "Total : " << t << std::endl;
        std::cout << "Total after discount is : " << t - d << std::endl;
    }
    else
    {
        std::cout << "Total : " << t;
    }
}