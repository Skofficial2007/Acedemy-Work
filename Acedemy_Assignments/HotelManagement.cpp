#include <iostream>
#include <iomanip>
using namespace std;

float calculateBill(int days, int nights, float roomCharge)
{
    float totalBill = nights * roomCharge * (days - nights);
    return totalBill;
}

float calculateTip(float billAmount, int tipPercentage)
{
    float tipAmount = billAmount * (tipPercentage / 100.0);
    return tipAmount;
}

void generateBill(int days, int nights, float roomCharge, float tipAmount, string roomName)
{
    cout << "Your room was: " << roomName << endl;
    cout << "Which is charged " << roomCharge << "$ per night" << endl;
    float totalBill = calculateBill(days, nights, roomCharge);
    cout << "The total bill amount is Rs." << totalBill << endl;
    cout << "The tip amount is Rs." << tipAmount << endl;
    cout << "The net amount payable is Rs." << (totalBill + tipAmount) << endl;
}

int getIntegerInput()
{
    int input;
    cin >> input;
    return input;
}

float getFloatInput()
{
    float input;
    cin >> input;
    return input;
}

int SelectRoom(float& roomCharge)
{
    cout << "\nSelect your room please: " << endl;
    cout << "1. Single Bed Room -> 250$ per night" << endl;
    cout << "2. Double Bed Room -> 450$ per night" << endl;
    cout << "3. Shared Room -> 150$ per night" << endl;
    cout << "4. Vip Single Bed Room -> 700$ per night" << endl;
    cout << "5. Vip Double Bed Room -> 1000$ per night" << endl;

    int choice;
    int flag = 0;
    do
    {
        if(flag)
        {
            cout << "Wrong input...." << endl << "Try Again!" << endl; 
        }
        cout << "\nEnter your choice: ";
        cin >> choice;
        flag = 1;
    }
    while(choice > 5 || choice < 1);

    switch (choice)
    {
        case 1:
        {
            roomCharge = 250;
            break;
        }
        case 2:
        {
            roomCharge = 450;
            break;
        }
        case 3:
        {
            roomCharge = 150;
            break;
        }
        case 4:
        {
            roomCharge = 700;
            break;
        }
        case 5:
        {
            roomCharge = 1000;
            break;
        }
        default:
        {
            cout << "Something is wrong....Let's try again" << endl;
            SelectRoom(roomCharge);
            break;
        }
    }

    return choice;
}

string RoomName(int choice)
{
    string roomName;

    switch(choice)
    {
        case 1:
        {
            roomName = "Single Bed Room";
            break;
        }
        case 2:
        {
            roomName = "Double Bed Room";
            break;
        }
        case 3:
        {
            roomName = "Shared Room";
            break;
        }
        case 4:
        {
            roomName = "Vip Single Bed Room";
            break;
        }
        case 5:
        {
            roomName = "Vip Double Bed Room";
            break;
        }
        default:
        {
            roomName = "ERROR";
            break;
        }
    }

    return roomName;
}

void checkIn(int& days, int& nights, float& roomCharge, int& roomNo)
{
    int flag = 0;
    cout << "\t\tWelcome" << endl;
    cout << "\nHow many days and nights do you want to stay here: " << endl;
    cout << "Days: ";
    days = getIntegerInput();
    do
    {
        if(flag)
        {
            cout << "Your day and night input doesn't match" << endl << "Try again.." << endl;
        }
        cout << "Nights: ";
        nights = getIntegerInput();
        flag = 1;
    } while (nights < days-1 || nights > days);
    
    roomNo = SelectRoom(roomCharge);
    cout << "\nThanks you for your time" << endl << "Enjoy your Stay...." << endl;
}

void checkOut(int days, int nights, float roomCharge, int roomNo, int& tipPercentage, float& billAmount, float& tipAmount)
{
    cout << "So you want to check-out..." << endl;
    cout << "\nYou stayed for " << days << " Days & " << nights << " nights" << endl;
    cout << "In room no. " << roomNo << " -> " << RoomName(roomNo) << endl;
    cout << "Enter the percentage of tip you want to give for our services: ";
    tipPercentage = getIntegerInput();
    cout << "\nCalculating Your Bill Amount...." << endl;
    billAmount = calculateBill(days, nights, roomCharge);
    cout << "\nCalculating Your Tip Amount...." << endl;
    tipAmount = calculateTip(billAmount, tipPercentage);
    cout << "\nThanks for your patience and understanding" << endl;
    cout << "\nHere's Your Bill -> " << endl;
    generateBill(days, nights, roomCharge, tipAmount, RoomName(roomNo));
}

int main()
{
    int days, nights, roomNo;
    float roomCharge;
    int tipPercentage;
    float billAmount;
    float tipAmount;

    checkIn(days, nights, roomCharge, roomNo);
    printf("\n\nPress any key to continue: ");
    char ch;
    cin >> ch;
    system("cls");
    cout << "\nAfter completing your stay" << endl << endl;
    checkOut(days, nights, roomCharge, roomNo, tipPercentage, billAmount, tipAmount);

    return 0;
}