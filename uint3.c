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
   unsigned char a = 0xFF;
   unsigned short int b = 0xFFFF; 
   unsigned int c = 0xFFFFFFFF;
   unsigned long int d = 0xFFFFFFFFFFFFFFFF;
   unsigned long long int e = 0xFFFFFFFFFFFFFFFF;
   printf("%u\n",  a);                  
   printf("%u\n",  b);
   printf("%u\n",  c);                  
   printf("%lu\n",  d);                  
   printf("%llu\n",  e); 
   
   return 0;
}
