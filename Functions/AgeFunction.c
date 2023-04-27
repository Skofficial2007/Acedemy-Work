/*
A person is elligible to vote if his/her age is greater than or equal to 18. Define a 
method to find out if he/she is elligible to vote.
*/

#include <stdio.h>

int valid(int age)
{
    if(age >= 18)
    {
        printf("\nHe/she is elligible to vote\n");
    }
    else
    {
        printf("\nHe/she isn't elligible to vote\n");
    }

    return 0;
}

int main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    valid(age);

    return 0;
}