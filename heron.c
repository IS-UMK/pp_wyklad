/*
 * =====================================================================================
 *
 *       Filename:  heron.c
 *
 *    Description:  wyznaczanie pierwiastka kwadratowego metoda Herona
 *
 *        Version:  1.0
 *        Created:  20.10.2013 23:00:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include<stdio.h>

int main()
{
   const float eps = 1e-4;
   float x, a, x0;

   printf("a = "); scanf("%f", &a);

   if( a < 0 ) printf("Zle dane: a < 0\n");
   else
   {
      x0 = 1;
      x = x0;
      do
      {
         x0 = x;
         x = (x0 + a/x0)/2;
      }while(x - x0 > eps || x - x0 < -eps);
      
      printf("pierwiastek z %f wynosi %f  (eps= %f)\n",a,x,eps);
   }
   return 0;
}


