/*
Write a C program to calculate profit or loss
*/

#include <stdio.h>

void main()
{
    float ic, n, sc, ac, t;
    printf("Enter the cost of item: ");
    scanf("%f", &ic);
    printf("Enter the no. of items to buy: ");
    scanf("%f", &n);
    ac = ic*n;
    printf("The cost of all the items are %.2f Rs.\n", ac);
    printf("Enter the cost it totally sold at: ");
    scanf("%f", &sc);
    t = sc - ac;
    if(t>0)
    {
        printf("You make a profit of: %.2f Rs.", t);
    }
    else if(t == 0)
    {
        printf("There is no profit or loss in this deal");
    }
    else
    {
        t = t*(-1);
        printf("You took a loss of: %.2f Rs.", t);
    }
}
