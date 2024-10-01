/*
 * =====================================================================================
 *
 *       Filename:  continue.c
 *
 *    Description:  Demonstracja instrukcji continue.
 *        Created:  26.10.2014 19:42:18
 *         Author:  Marek Grochowski
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
   int i, n=16;
   
   for(i=1; i<=n; i++)
   {
      if( i==13 ) continue; 
      printf("%d\n",i);
   }

   return 0;
}
