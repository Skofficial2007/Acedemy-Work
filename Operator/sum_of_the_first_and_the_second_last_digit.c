//Write a program to calculate the sum of the first and the second last digit of a 5 digit number entered from the keyboard.

#include <stdio.h>

void main ()
{
  int num, f, l, sum;
  printf ("Enter a 5 digit number: ");
  scanf ("%d", &num);
  f = num / 10000;
  l = num % 100;
  l = l / 10;
  printf ("\nThe first digit: %d", f);
  printf ("\nThe last digit: %d", l);
  sum = l + f;
  printf ("\nSum of the first and the second last digit is: %d", sum);
}
