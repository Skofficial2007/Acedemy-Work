/*
Write a C program to count total number of notes in given amount
*/

#include <stdio.h>

void main()
{
    int amount, h, f, t, r, n;
    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d",&amount);
    h = amount /100;
    f = (amount %100) /50;
    t = (((amount %100) %50) /10);
    r = (((amount %100) %50) %10);
    printf("\nNotes of Rs. 100 : %d", h);
    printf("\nNotes of Rs. 50 : %d", f);
    printf("\nNotes of Rs. 10 : %d", t);
    printf("\nAmount still remaining is : %d Rs.", r);
    n = h + f + t;
    printf("\nThe total number of notes are: %d", n);
}

