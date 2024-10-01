/*
 * =====================================================================================
 *
 *       Filename:  szyfr_xor.c
 *    Description:  Demonstracja szyfru XOR
 *         Author:  Marek Grochowski (2015), 
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
   unsigned char klucz = 13;
   char znak;
   
   while( (znak=getchar()) != EOF )
      putchar( znak ^ klucz );

   return 0;
}


