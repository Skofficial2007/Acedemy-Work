/*
Write a C program to input any alphabet and check whether it is vowel or consonant.
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
        if(A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' || A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U')
        {
            printf("\nThe character %c is a vowel", A);
        }
        else
        {
            printf("\nThe character %c is a consonant", A);
        }
    }
}

