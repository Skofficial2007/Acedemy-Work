/*
Write a program in C to split strings by space into words
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char words[20][50];
    int i, j = 0, c = 0;

    printf("Enter a string of text: ");
    gets(str);

    for(i = 0; i <= strlen(str); i++)
    {
        if(str[i] == (char)(32) || str[i] == '\0')
        {
            words[c][j] = '\0';
            c++;
            j = 0;
        }
        else
        {
            words[c][j] = str[i];
            j++;
        }
    }

    printf("All the words in string are: \n");
    for(int i = 0; i < c; i++)
    {
        puts(words[i]);
    }

    return 0;
}