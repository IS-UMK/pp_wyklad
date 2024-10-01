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
   int n, x;

   n = 12;
   x = fibonacci(n);

   printf("fib(%d) = %d\n", n, x);

   return 0;
}

