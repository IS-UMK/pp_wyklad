/*
 * =====================================================================================
 *
 *       Filename:  goto4.c
 *    Description:  Sytuacje gdzie goto moze sie przydac
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
   int i, j, k; 

   for (i =0; i < 100; i = i + 1)
   {
      for (j =0; j < i; j = j + 1)
      {
         for (k=0; k < j; k = k + 1)
         {
            if (i + j + k > 42) goto koniec; 
         }
      }
   }

   koniec:
   printf("Koniec: i=%d, j=%d, k=%d\n", i, j, k);            
}

