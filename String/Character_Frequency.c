/*
Write a program in C to find the frequency of characters
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character who's frequency you want to find: ");
    scanf("%c", &ch);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    if(count == 0)
    {
        printf("\n%c doesn't exist in this string\n\n", ch);
    }
    else
    {
        printf("\n%c appeared %d times in this string\n\n", ch, count);
    }

    return 0;
}