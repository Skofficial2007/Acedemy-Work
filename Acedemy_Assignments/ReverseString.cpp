#include <iostream>
#include <algorithm>
using namespace std;

string Reverse(string input)
{
    int left = 0;
    int right = input.length() - 1;

    while(left < right)
    {
        swap(input[left], input[right]);
        left++;
        right--;
    }

    return input;
}

bool Palindrome(string input)
{
    input = input + " ";
    string word;
    int step = 0;

    for(auto x : input)
    {
        if(x == ' ')
        {
            if(word.length() != 1)
            {
                string temp = Reverse(word);

                if(temp == word)
                {
                    step++;
                    cout << step << ". " << word << " is a Palindrome word" << endl;
                }

                word = "";
            }
        }
        else
        {
            word = word + x;
        }
    }

    if(step)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string input;

    cout << "Input something: ";
    getline(cin, input);

    cout << "Your input was: " << input << endl;
    cout << "Reverse of your input is: " << Reverse(input) << endl;

    if(!Palindrome(input))
    {
        cout << "There isn't any palindrome word available in this input string" << endl;
    }

    return 0;
}