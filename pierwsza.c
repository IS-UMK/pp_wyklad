/*
 * =====================================================================================
 *
 *       Filename:  pierwsza.c
 *
 *    Description:  Program sprawdzający czy liczba jest pierwsza - metoda naiwna.
 *
 *        Version:  1.0
 *        Created:  27.10.2013 21:50:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>
int jest_pierwsza ( int n )
{
   int i =2;
   while ( i<n )
   {
      if ( n % i == 0 ) return 0 ;
      i = i + 1;
   }
   return 1 ;
}

int main()
{
   int n;

   printf("n = "); scanf("%d",&n);
   if(jest_pierwsza(n)) printf("Liczba %d jest pierwsza\n",n);
   else printf("Liczba %d nie jest pierwsza\n",n);

   return 0;
}
