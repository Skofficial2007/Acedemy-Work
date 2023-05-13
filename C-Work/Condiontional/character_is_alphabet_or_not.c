/*
Write a C program to check whether a character is alphabet or not.
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
        printf("The character %c is a alphabet", A);
    }
}

