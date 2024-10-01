/*
 * =====================================================================================
 *
 *       Filename:  pierwsza3.c
 *    Description:  Program  wypisujacy liczby pierwsze w zakresie od 1 do N. 
 *                  Deklaracja (naglowek) funkcji jest_pierwsza jest odseparowny 
 *                  od definicji funkcji.
 *         Author:  Marek Grochowski (20134), 
 *
 * =====================================================================================
 */
#include <stdio.h>

/* Deklaracja funkcji */
int jest_pierwsza ( int n );

int main()
{
   int n, i=1;
   printf("n = "); 
   scanf("%d", &n);
   while(i<=n) 
   {
      if(jest_pierwsza(i) == 1) printf("%d\n",i);
      i++;
   }
   return 0;
}

