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
   int x, i, n; 

   printf("n = ");
   scanf("%d",&n);

   if(n<0) printf("Zle dane: n<0\n"); 
   else  printf("%d!=%d\n", n, silnia(n));

   return 0; 
}
