/*
Write a program in C to convert a string to lowercase if it is in
Upper case or in Uppercase if it is in Lower case without using any inbuild functions
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if((int)(ch) > 64 && (int)(ch) < 91)
        {
            ch = ch + 32;
            str[i] = ch;
        }
        else if((int)(ch) > 96 && (int)(ch) < 123)
        {
            ch = ch - 32;
            str[i] = ch;
        }
    }

    printf("\nYour new string is: \n");
    puts(str);
    printf("\n");

    return 0;
}