/*
 * =====================================================================================
 *
 *       Filename:  d2b2.c
 *    Description:  Wypisywanie liczb w postaci binarnej za pomoca operatorow bitowych.
 *         Author:  Marek Grochowski (2015), 
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void wypisz(int x, int n)
{
   int i;

   for( i=n-1 ; i >=0 ; i-- )
   {
      if ( x  & ( 1 << i )) putchar('1');
      else putchar('0');
   }
}


int main()
{
   int x, n = 32;

   scanf("%d",&x);
   printf("%#o\n%#x\n",x,x);
   wypisz(x, n);
   printf("\n");
   
   return 0;
}
