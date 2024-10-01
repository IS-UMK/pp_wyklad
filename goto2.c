/*
 * =====================================================================================
 *
 *       Filename:  goto2.c
 *    Description:  To samo co w goto.c tylko, ze bez uzycia instrukcji goto 
 *        Created:  25.10.2014 21:35:00
 *         Author:  Marek Grochowski 
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   int n;
   int stop = 0;
   
   while( stop == 0 ) 
   {
      printf("Podaj liczbe z zakresu od 1 do 10\n");
      scanf("%d", &n);
      if( n >= 1 && n<=10 ) stop=1;
      else printf("Blad: niepoprawna wartosc\n");
   }
      
   printf("OK: podales liczbe %d\n", n);
   return 0;
}
