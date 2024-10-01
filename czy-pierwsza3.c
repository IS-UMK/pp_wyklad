/*
 * =====================================================================================
 *       Filename:  czy_pierwsza3.c
 *    Description:  Program sprawdzający czy liczba jest pierwsza - metoda naiwna. 
 *                  Demonstracja instrukcji break.
 *         Author:  Marek Grochowski (2019) 
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   int n, i = 3, czy_pierwsza=0;

   printf("n = "); 
   scanf("%d", &n);
  
   if ( n > 2 && n % 2 == 0 ) printf("Liczba %d nie jest liczba pierwsza\n",n);
   else
   {
      for (i=3; i*i < n ; i = i + 2 )
      {
         if ( n % i == 0 ) break;
      }
      
      if (i * i > n || n < 3) printf("Liczba %d jest liczba pierwsza\n",n);
      else printf("Liczba %d nie jest liczba pierwsza\n",n);
   }

   return 0;
}
