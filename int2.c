/*
 * =====================================================================================
 *
 *       Filename:  ints2.c
 *    Description:  Cwiczenie dotyczace formatu liczb calkowitych ze znakiem
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   long int x = 4294967295;
   printf("%d\n",  x);      /*  -1, ZLE */        
   printf("%ld\n", x);      /*  OK      */ 
   
   return 0;
}
