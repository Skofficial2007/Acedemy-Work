/*
A school has following rules for grading system: 
a. Below 25% - F Grade 
b. 25% to 45% - E Grade 
c. 45% to 50% - D Grade 
d. 50% to 60% - C Grade 
e. 60% to 80% - B Grade 
f. 80% to 90% - A Grade 
g. Above 90% - S Grade 
Ask the User for marks of 5 Subjects and Calculate percentage and then print the Grades 
according to the given conditions 
*/

#include <stdio.h>

void main()
{
    float s1, s2, s3, s4, s5, m, p;
    printf("Enter marks of subjects s1, s2, s3, s4, s5: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    m = s1 + s2 + s3 + s4 + s5;
    p = (m*100)/500;
    if(s1>=0 && s2>=0 && s3>=0 && s4>=0 && s5>=0)
    {
        if(p>0 && p<25)
        {
            printf("You got F Grade");
            printf("\nIn Percentage: %.2f", p);
        }
        else if(p>=25 && p<45)
        {
            printf("You got E Grade");
            printf("\nIn Percentage: %.2f", p);
        }
        else if(p>=45 && p<50)
        {
            printf("You got D Grade");
            printf("\nIn Percentage: %.2f", p);
        }
        else if(p>=50 && p<60)
        {
            printf("You got C Grade");
            printf("\nIn Percentage: %.2f", p);
        }
        else if(p>=60 && p<80)
        {
            printf("You got B Grade");
            printf("\nIn Percentage: %.2f", p);
        }
        else if(p>=80 && p<90)
        {
            printf("You got A Grade");
            printf("\nIn Percentage: %.2f", p);
        }
        else if(p>=90)
        {
            printf("You got S Grade");
            printf("\nIn Percentage: %.2f", p);
        }
    }
    else
        printf("Invalid inputs");
    
} 
 
 
 
 

