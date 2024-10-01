/*
 * =====================================================================================
 *
 *       Filename:  silnia.c
 *
 *    Description:  program wyznaczajacy wartosc silni
 *
 *        Version:  1.0
 *        Created:  20.10.2013 23:59:10
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
   int x, i, n; 

   printf("n = ");  
   scanf("%d", &n);

   if(n<0) printf("Zle dane: n<0\n");
   else
   {
      x=1;
      i=2;  
      while( i <= n )
      {
         x = x * i;
         i = i + 1;
      }
      printf("%d! = %d\n", n, x);
   }
   return 0; 
}
