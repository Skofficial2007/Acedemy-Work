//Write a program to input No. of classes held and No. of Classes attended and print the Attendance Percentage

#include <stdio.h>

int
main ()
{
  int n, a, p;
  printf ("The number of classes held: ");
  scanf ("%d", &n);
  printf ("The number of classes attended: ");
  scanf ("%d", &a);
  printf ("\nThe number of classes held: %d", n);
  printf ("\nThe number of classes attended: %d", a);
  p = ((a * 100) / n);
  printf ("\nPercentage: %d", p);
}
