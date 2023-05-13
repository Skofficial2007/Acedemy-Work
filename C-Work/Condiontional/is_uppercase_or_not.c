/*
Write a C program to check whether a character is uppercase or lowercase alphabet
*/

#include <stdio.h>
#include <ctype.h>

void main()
{
    char A;
    printf("Enter a character: ");
    scanf("%c", &A);
    
    if(isalpha(A) == 0)
    {
        printf("The character %c is not a alphabet", A);
    }
    else
    {
        if (isupper(A) == 0)
        {
            printf("The character %c is Lowercase", A);
        }
        else
        {
            printf("The character %c is Uppercase", A);
        }
    }
}

