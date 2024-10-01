/*
 * =====================================================================================
 *       Filename:  czy_pierwsza.c
 *    Description:  Program sprawdzający czy liczba jest pierwsza - metoda naiwna. 
 *                  Demonstracja instrukcji break.
 *         Author:  Marek Grochowski (2019) 
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   int n, i = 2;

   printf("n = "); 
   scanf("%d", &n);
   
   while ( i < n )
   {
      if ( n % i == 0 ) break;
      i = i + 1;
   }

   if(i == n || n == 1) 
      printf("Liczba %d jest liczba pierwsza\n", n);
   else 
      printf("Liczba %d nie jest liczba pierwsza\n", n);

   return 0;
}
