/*
 * =====================================================================================
 *
 *       Filename:  rownanie_liniowe.c
 *
 *    Description:  Program znajduje miejsce zerowe funkcji liniowej 
 *                  f(x) = ax + b
 *
 *        Version:  1.0
 *        Created:  20.10.2013 11:07:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   float a, b, x0;

   printf("Podaj wspolczynniki rownania\n");
   printf("a = "); scanf("%f", &a);
   printf("b = "); scanf("%f", &b);
   
   if( a != 0.0 )
   { 
      x0 = -b / a;
      printf("x0 = %.4f\n", x0);
   }
   else printf("Brak rozwiazan\n");
   
   return 0;
}
