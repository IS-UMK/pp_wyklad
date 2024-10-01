/*
 * =====================================================================================
 *
 *       Filename:  bitowe1.c
 *    Description:  Demonstracja operatorow bitowych
 *         Author:  Marek Grochowski (2015), 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   unsigned int a = 9;
   unsigned int b = 12;
   
   printf("a     = %u\nb     = %u\n", a, b); 
   printf("~a    = %u\n~b    = %u\n", ~a, ~b); 
   printf("a & b = %u\n", a & b);
   printf("a | b = %u\n", a | b);
   printf("a ^ b = %u\n", a ^ b);

   return 0;
}
