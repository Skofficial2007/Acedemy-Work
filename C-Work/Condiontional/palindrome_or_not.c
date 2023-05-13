/*
Write a program to find whether a 4 Digit number is palindrome or not. 
Eg. 1221 if we reverse it then we can se that 1221 is same as we reversed it 
*/

#include <stdio.h>

void main()
{
    int num, temp, n1, n2, n3, n4, r;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    temp = num;
    n1 = temp / 1000;
    n2 = (temp / 100) % 10;
    n3 = (temp % 100) / 10;
    n4 = (temp % 10);
    // printf("n1: %d\n", n1);
    // printf("n2: %d\n", n2);
    // printf("n3: %d\n", n3);
    // printf("n4: %d\n", n4);
    r = (n4*1000) + (n3*100) + (n2*10) + n1;
    if(num == r)
    {
        printf("%d is a palindrome number", num);
    }
    else
        printf("%d is not a palindrome number", num);
} 
 
 
 
 


