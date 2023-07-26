/*
Ascii values ->
A = 65 to Z = 90
a = 97 to z = 122
*/

#include <iostream>
#include <cstring>
using namespace std;

string Encrypt(string& input, string upperAlphabet, string lowerAlphabet)
{
    string completeAlphabet = upperAlphabet + lowerAlphabet;

    for(auto x : input)
    {
        if(completeAlphabet.find(x) != string::npos)
        {
            if(isupper(x))
            {
                int i = upperAlphabet.find(x);
                int j = input.find(x);

                input[j] = (x + 25 - 2*i);
            }
            else
            {
                int i = lowerAlphabet.find(x);
                int j = input.find(x);

                input[j] = (x + 25 - 2*i);
            }
        }
    }

    return input;
}

string Decrypt(string& input, string upperAlphabet, string lowerAlphabet)
{
    string completeAlphabet = upperAlphabet + lowerAlphabet;

    for(auto x : input)
    {
        if(completeAlphabet.find(x) != string::npos)
        {
            if(isupper(x))
            {
                int i = upperAlphabet.find(x);
                int j = input.find(x);

                input[j] = (x + 25 - 2*i);
            }
            else
            {
                int i = lowerAlphabet.find(x);
                int j = input.find(x);

                input[j] = (x + 25 - 2*i);
            }
        }
    }

    return input;
}

int main()
{
    string upperAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowerAlphabet = "abcdefghijklmnopqrstuvwxyz";
    //                      01234567890123456789012345

    string input;
    cout << "Enter something: ";
    getline(cin, input);
    cout << "Your input is: " << input << endl;

    cout << "Encrypted string of input is: " << Encrypt(input, upperAlphabet, lowerAlphabet) << endl;
    cout << "Decrypted string of input is: " << Decrypt(input, upperAlphabet, lowerAlphabet) << endl;
}