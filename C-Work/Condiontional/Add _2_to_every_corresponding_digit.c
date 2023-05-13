//Suppose you entered a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.
//For example, if he entered number is 5696, then the displayed number should be 7818.

#include <stdio.h>

void main ()
{
    int num, temp1, temp2, temp3, temp4, n1, n2, n3, n4, num2;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    temp1 = num;
    temp2 = num;
    temp3 = num;
    temp4 = num;
    n1 = ((temp1 / 1000) + 2);
    n2 = (((temp2 / 100) % 10) + 2);
    n3 = ((((temp3 / 10) % 100) % 10) + 2);
    n4 = ((((temp4 % 1000) % 100) % 10) + 2);

    if(n1>=10)
    {
        n1=n1 % 10;
    }
    else if(n2>=10)
    {
        n2=n2 % 10;
    }
    else if(n3>=10)
    {
        n3=n3 % 10;
    }
    else if(n4>=10)
    {
        n4=n4 % 10;
    }
    
    num2 = ((n1*1000) + (n2*100) + (n3*10) + (n4));
    
    printf("\nn1: %d", n1);
    printf("\nn2: %d", n2);
    printf("\nn3: %d", n3);
    printf("\nn4: %d", n4);
    
    printf("\nThe number is: %d", num2);
}
