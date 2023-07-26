#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1 = "Siddharth";
    string str2 {"Saini"};

    string FullName = str1 + str2;

    cout << FullName << endl;

    string str3 = str1 + " " + str2;

    string word = "";
    for(auto x : str3)
    {
        if(x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    cout << word << endl;

    return 0;
}