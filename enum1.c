/*
 * =====================================================================================
 *
 *       Filename:  enum1.c
 *    Description:  Demo typu wyliczenioweg
 *
 * =====================================================================================
 */

#include <stdio.h>

enum kolory { zielony, niebieski, czerwony, czarny };

int main()
{
   enum kolory n;

   for(n=zielony; n<=10; n++) 
      printf("%d\n", n);

   return 0;
}
