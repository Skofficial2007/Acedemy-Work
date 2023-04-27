/*
Write a program to input No. of classes held and No. of Classes attended and find the 
Attendance Percentage and check if He / She can sit in the exam. If the attendance 
Percentage is less than 75% the student is not allowed to sit in the exam. 
*/

#include <stdio.h>

void main()
{
    int h, a;
    float p;
    printf("Enter No. of Classes held & No. of Classes attended: ");
    scanf("%d %d", &h, &a);
    p = (a*100)/h;
    printf("The Attendance Percentage is: %.2f", p);
    if(p > 0)
    {
        if(p >= 75)
        {
            printf("\nHe / She can sit in the exam");
        }
        else
            printf("\nHe / She cann't sit in the exam");
    }
    else
        printf("\nInvalid Inputs");
} 
 
 
 
 

