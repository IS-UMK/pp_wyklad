/*
 * =====================================================================================
 *
 *       Filename:  fib2.c
 *    Description:  Wyznaczanie n-tego elementu ciagu Fibonacciego (iteracyjnie).
 *         Author:  Marek Grochowski (2014), 
 *
 * =====================================================================================
 */

#include<stdio.h>

int fibonacci(int n)
{
   int f=1, fp=1, k;

   while( n>1 )
   {
      k = f + fp;
      fp = f;
      f = k;
      n--;
   }
   return f;
}

int main()
{
   int n, i;

   printf("n=");
   scanf("%d", &n);

   for(i=0; i<=n; i++) 
      printf("%d %d\n",i, fibonacci(i));

   return 0;
}
