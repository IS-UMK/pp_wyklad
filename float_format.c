/*
 * =====================================================================================
 *
 *       Filename:  float_format.c
 *    Description:  Formatowanie liczb zmiennopozycyjnych
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   float  x = 10.14;
   double y = 5e-3;

   printf("%f  %e  %g\n", x, x, x);
   printf("%f  %e  %g\n", y, y, y);

   return 0;
}
