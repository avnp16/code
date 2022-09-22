/* C Program to Declare a Variable and Print Its Value */

#include <stdio.h>

void main ()
{
  int a = 9, b = 10; /* declaration of integer types variables */
  float c = 5.5, d = 15.5; /* declaration of floating types variables */

  printf ("Values of integer variables are: \n");
  printf ("%d\n%d \n", a, b); /* printing integer types of variables using format specifier (%d) */

  printf ("Values of floating variables are: \n"); /* printing float types of variables using format specifier (%f) */
  printf ("%f \n%f", c, d);
}

