//Write a program to input the price of the item and no. of item from the user 
//and calculate the Total price and then give a discount of 10.25% to the user. 

#include <stdio.h>

int
main ()
{
  double p, t, n, d;
  printf ("The price of item is: ");
  scanf ("%lf", &p);
  printf ("The no. of item is: ");
  scanf ("%lf", &n);

  t = p * n;
  printf ("\nThe total price is: %lf", t);

  d = ((t * 10.25) / 100);
  t = t - d;

  printf ("\nThe total price after discount is: %lf", t);
}
