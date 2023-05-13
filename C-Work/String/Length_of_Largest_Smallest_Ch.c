/*
Write a program in C to find the largest and smallest words in a string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int small = 100, large = 0;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    // To add space at the end of the string
    int n = strlen(str);
    char *p = str;
    *(p + n) = (char)(32);
    *(p + n + 1) = '\0';

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != (char)(32))
        {
            count++;
        }
        else
        {
            // In case someone did add a space at end
            if(str[i+1] != (char)(32))
            {
                if(count > large)
                {
                    large = count;
                }
                else if(count < small)
                {
                    small = count;
                }

                count = 0;
            }
        }
    }

    printf("\nIn string: ");
    puts(str);
    printf("\nThe largest character length is: %d\nThe smallest character length is: %d\n\n", large, small);

    return 0;
}