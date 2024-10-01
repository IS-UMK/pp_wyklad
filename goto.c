/*
 * =====================================================================================
 *
 *       Filename:  goto.c
 *
 *    Description:  Demonstracja dzialania instrukcji skoku goto 
 *
 *        Version:  1.0
 *        Created:  25.10.2014 21:35:00
 *         Author:  Marek Grochowski 
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   int n;
   poczatek:
   printf("Podaj liczbe z zakresu od 1 do 10\n");
   scanf("%d", &n);
   if( n<1 || n>10 ) 
   {
      printf("Blad: niepoprawna wartosc\n");
      goto poczatek;
   }
   else
   {
      printf("OK: podales liczbe %d\n", n);
      goto koniec;
   }
   printf("Halo, tutaj jestem!\n");
   koniec:

   return 0;
}
