//Write a program to reverse a 3-digit number which is entered from keyboard. E.g.-
//INPUT : 132        OUTPUT : 231

#include <stdio.h>

int
main ()
{
  int num, n1, n2, n3, num2;
  printf ("Enter a 3-digit number: ");
  scanf ("%d", &num);
  n1 = num / 100;
  printf ("\nn1 = %d", n1);
  n2 = (num / 10) % 10;
  printf ("\nn2 = %d", n2);
  n3 = num % 10;
  printf ("\nn3 = %d", n3);
  num2 = (n3 * 100) + (n2 * 10) + (n1);
  printf ("\nThe reverse of given number is: %d", num2);
}
