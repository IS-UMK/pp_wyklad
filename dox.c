/*
 * =====================================================================================
 *
 *       Filename:  dox.c
 *
 *    Description:  Demonstracja zapisu liczb calkowitych w systemie szesnastkowym i osemkowym.
 *
 *        Version:  1.0
 *        Created:  07.12.2013 01:33:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  MG (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   int a = 10;       /* dec */
   int b = 010;      /* oct */
   int c = 0x10;     /* hex */
   
   printf("dec: %d %d %d\n", a, b, c); 
   printf("oct: %o %o %o\n", a, b, c); 
   printf("hex: %x %x %x\n", a, b, c); 

   return 0;
}

