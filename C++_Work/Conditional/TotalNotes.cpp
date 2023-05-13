/*
Write a C program to count total number of notes in given amount. 
*/

#include <iostream>
#include <cmath>

int main()
{
    int amount, notes, totalNotes = 0;
    std::cout << "Enter amount: ";
    std::cin >> amount;
    notes = amount / 100;
    totalNotes += notes;
    amount = amount % 100;
    notes = amount / 50;
    totalNotes += notes;
    amount = amount % 50;
    notes = amount / 20;
    totalNotes += notes;
    amount = amount % 20;
    notes = amount / 10;
    totalNotes += notes;
    std::cout << "Total notes: " << totalNotes << std::endl;
    return 0;
}