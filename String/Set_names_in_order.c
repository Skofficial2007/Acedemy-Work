/*
Write down the names of 10 of your friends in an array and then sort those in alphabetically ascending order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][20];

    for(int i = 0; i < 10; i++)
    {
        printf("Enter a name: ");
        scanf("%s",names[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        puts(names[i]);
    }

    char temp[20];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if((strcmp(names[i], names[j])) < 0)
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
            
        }
    }

    printf("\n\nAfter sorting all the names: \n\n");

    for(int i = 0; i < 10; i++)
    {
        puts(names[i]);
    }

    return 0;
}