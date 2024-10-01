/*
 * =====================================================================================
 *
 *       Filename:  silnia2.c
 *    Description:  program wyznaczajacy wartosc silni i za pomocą rekurencji
 *         Author:  Marek Grochowski (2014), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include<stdio.h>

int silnia(int n)
{
   if( n<=1 ) return 1; 
   return n * silnia(n-1);
}

int main()
{
   int x, n = 3; 
   x = silnia(n);
   printf("%d!=%d\n", n, x);
   return 0; 
}
