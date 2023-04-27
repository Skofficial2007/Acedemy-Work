/*
Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following 
rules print their place of service. 
if employee is female, then she will work only in urban areas. 
if employee is a male and age is in between 20 to 40 then he may work in anywhere 
if employee is male and age is in between 40 t0 60 then he will work in urban areas only. 
And any other input of age should print "ERROR".
*/

#include <stdio.h>

void main()
{
    int age;
    char sex, ms;

    printf("Enter your sex (M or F) : ");
    scanf("%c", &sex);
    // printf("Enter martial status (Y or N) : ");
    // scanf("%c", &ms);
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(sex == 'M' || sex == 'm')
    {
        if(age >= 20 && age <= 40)
        {
            printf("He may work anywhere");
        }
        else if(age > 40 && age <= 60)
        {
            printf("He will work in urban area only");
        }
        else
            printf("ERROR");
    }
    else if(sex == 'F' || sex == 'f')
    {
        if(age >= 20)
        {
            printf("She will work only in urban areas");
        }
        else
            printf("ERROR");
    }
    else
        printf("ERROR");
} 
 
 
 
 


