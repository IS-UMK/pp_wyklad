/*
 * =====================================================================================
 *
 *       Filename:  switch2.c
 *    Description:  Demonstracja dzialania instrukcji switch
 *        Created:  26.10.2014 21:05:37
 *         Author:  Marek Grochowski
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
   int n;
   
   printf("Podaj liczbe od 1 do 4\n");
   scanf("%d", &n);

   switch(n)
   {
      case 1:
         printf("Przypadek 1\n");
      case 2 :
         printf("Przypadek 2\n");
      case 3 :
         printf("Przypadek 3\n");
         break;
      case 4 :
         printf("Przypadek 4\n");
         break;
      default:
         printf("Nieznana operacja.");
   }
   return 0;
}
