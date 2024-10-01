/*
 * =====================================================================================
 *
 *       Filename:  enum1.c
 *    Description:  Demo typu wyliczenioweg
 *
 * =====================================================================================
 */

#include <stdio.h>

enum kolory { zielony=3, niebieski=7, czerwony, czarny };

int main()
{
   enum kolory n;

   printf("sizeof = %d\n", sizeof(n));

   for(n=zielony; n<=czarny; n++) 
      printf("%d\n", n);

   return 0;
}
