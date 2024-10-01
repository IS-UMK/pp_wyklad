/*
 * =====================================================================================
 *
 *       Filename:  ints2.c
 *    Description:  Cwiczenie dotycace formatu liczb calkowitych 
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   unsigned int x = 4294967295;
   unsigned long y = 4294967296;
   printf("%u\n",  x);                  
   printf("%d\n",  x);                 /* -1  */
   printf("%o\n",  x);                  
   printf("%x\n",  x);                  
   printf("%u\n",  y);                 /*  0  */
   printf("%lu\n", y);     
   
   return 0;
}
