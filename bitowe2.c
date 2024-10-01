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
   unsigned int a = 5;
   
   printf("a      = %u\n", a);
   printf("a << 1 = %u\n", a << 1);
   printf("a << 2 = %u\n", a << 2);
   printf("a >> 1 = %u\n", a >> 1);
   printf("a >> 2 = %u\n", a >> 2);

   return 0;
}
