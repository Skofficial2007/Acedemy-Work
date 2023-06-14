/*
Create a class called "StringManipulator" to perform string manipulation operations.
Implement a static member function to reverse a given string and return the reversed string.
*/

#include <iostream>
#include <string>

using namespace std;

class StringManipulator
{
public:
    static string reverse(string str)
    {
        string reversedStr = "";
        for (int i = str.length() - 1; i >= 0; i--)
        {
            reversedStr += str[i];
        }
        return reversedStr;
    }
};

int main()
{
    string str = "Hello World!";
    cout << StringManipulator::reverse(str) << endl;
    return 0;
}