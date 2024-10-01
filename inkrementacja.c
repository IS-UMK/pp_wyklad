/*
 * =====================================================================================
 *
 *       Filename:  inkrementacja.c
 *    Description:  Demonstracja operatorow post-inkrementacji
 *         Author:  Marek Grochowski (2015) 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   int a = 1;
   int b;

   b = ++a;
   printf("a=%d, b=%d\n", a, b);

   b = a++;
   printf("a=%d, b=%d\n", a, b);
   
   b = --a;
   printf("a=%d, b=%d\n", a, b);
   
   b = a--;
   printf("a=%d, b=%d\n", a, b);

   return 0;
}
