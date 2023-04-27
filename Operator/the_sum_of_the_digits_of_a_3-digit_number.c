//Write a program to calculate the sum of the digits of a 3-digit number which is entered from keyboard. E.g.-
//INPUT : 132        OUTPUT : 6

#include <stdio.h>

int
main ()
{
  int num, temp, n1, n2, n3, sum;
  printf ("Enter a 3 digit number: ");
  scanf ("%d", &num);
  temp = num;
  n1 = temp / 100;
  n2 = (temp % 100) / 10;
  n3 = temp % 10;
  printf ("\nn1: %d", n1);
  printf ("\nn2: %d", n2);
  printf ("\nn3: %d", n3);
  sum = n1 + n2 + n3;
  printf ("\nThe sum of the digits of a 3-digit number %d is: %d", num, sum);
}
