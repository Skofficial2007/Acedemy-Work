/*
Write a C program to input any character and check whether it is alphabet, digit or special character.
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
        if(isdigit (A))
        {
            printf("The character %c is a digit", A);
        }
        else
        {
            printf("The character %c is a special character", A);
        }
    }
    else
    {
        printf("The character %c is a alphabet", A);
    }
}

