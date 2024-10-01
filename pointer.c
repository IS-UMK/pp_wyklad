/*
 * =====================================================================================
 *
 *       Filename:  pointer.c
 *
 *    Description:  Prosta demonstracja arytmetyki na wskaznikach
 *
 *        Version:  1.0
 *        Created:  30.11.2013 16:47:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   int   a;
   char  b;
   int  *pa = &a;
   char *pb = &b;
   
   printf("pa   = %p %lu\n", pa   , pa  );
   printf("pa+1 = %p %lu\n", pa+1 , pa+1);
   printf("pb   = %p %lu\n", pb   , pb  );
   printf("pb+1 = %p %lu\n", pb+1 , pb+1);
   
   return 0;
}
