/*
Write a program to input the price of the item and no. of item from the user and calculate the Total 
price and then give a discount of 10.25% to the user. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int item_price;
    int item_no;
    int total_price;
    float discount;
    float after_discount;
    std::cout << "Enter the price of the item : ";
    std::cin >> item_price;
    std::cout << "Enter the no. of item : ";
    std::cin >> item_no;
    total_price = item_price * item_no;
    discount = total_price * 10.25 / 100;
    std::cout << "Total price : " << total_price << std::endl;
    std::cout << "Discount : " << discount << std::endl;
    after_discount = total_price - discount;
    std::cout << "After discount : " << after_discount << std::endl;
    return 0;
}