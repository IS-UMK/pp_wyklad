/*
 * =====================================================================================
 *
 *       Filename:  fib1.c
 *    Description:  Wyznaczanie n-tego elementu ciagu Fibonacciego (rekurencja).
 *         Author:  Marek Grochowski (2014), 
 *
 * =====================================================================================
 */

#include<stdio.h>

int fibonacci(int n)
{
   if( n==0 ) return 1;
   if( n==1 ) return 1;
   return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
   int n, i;

   printf("n=");
   scanf("%d", &n);

   for(i=0; i<=n; i++) 
      printf("%d %d\n", i, fibonacci(i));

   return 0;
}

