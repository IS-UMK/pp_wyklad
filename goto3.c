/*
 * =====================================================================================
 *
 *       Filename:  goto3.c
 *
 *    Description:  To samo co w goto.c tylko, ze bez uzycia instrukcji goto 
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
   
   printf("Podaj liczbe z zakresu od 1 do 10\n");
   scanf("%d", &n);
   
   while( n<1 || n>10 )
   {
      printf("Blad: niepoprawna wartosc\n");
      scanf("%d", &n);
   }
      
   printf("OK: podales liczbe %d\n", n);

   return 0;
}
