/*
 * =====================================================================================
 *
 *       Filename:  hanoi.c
 *
 *    Description:  Program rozwiazujacy zadanie wiez Hanoi w sposob rekurencyjny
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */

#include <stdio.h>

void hanoi(int n, char skad, char dokad, char przez)
{
   if(n<1) return ;
   hanoi(n-1, skad, przez, dokad);
   printf("[%d] %c -> %c\n", n, skad, dokad);
   hanoi(n-1, przez, dokad, skad);
}

int main()
{
   int n;

   while(1)
   {
      printf("Wysokosc wiezy ? ");
      scanf("%d", &n);
      if(n<1) break;
      hanoi(n, 'A', 'B', 'C'); 
   };

   return 0;
}

