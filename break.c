/*
 * =====================================================================================
 *
 *       Filename:  break.c
 *    Description:  Demonstracja dzialania polecenia brake
 *        Created:  26.10.2014 19:17:10
 *         Author:  Marek Grochowski
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
   char c;

   while(1)
   {
      printf("Czy przerwac [t/n]? ");
      scanf(" %c", &c);
      if( c == 't' || c == 'T' ) break;
      printf("Przmysl to!\n");
   } 
   printf("Koniec.\n");
}


