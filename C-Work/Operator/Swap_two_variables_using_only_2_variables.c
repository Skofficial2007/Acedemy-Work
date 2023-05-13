//Write a program to swap two Values (With two variables)

#include <stdio.h>

int
main ()
{
  int a, b;
  printf ("Enter value of a and b: ");
  scanf ("%d %d", &a, &b);
  printf ("The value of a and b are: %d & %d", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf ("\nThe swapped value of a & b are: %d & %d", a, b);
}
