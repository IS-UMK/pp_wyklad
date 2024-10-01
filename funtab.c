/*
 * Program demonstrujacy roznice pomiedzy przekazywaniem zmiennych i tablic do funkcji.
 */

#include<stdio.h>

void funkcja(int tab[], int x)
{
   tab[0]++;
   x++;
}

int main()
{
   int tab[10], x = 5;

   tab[0] = x;
   funkcja(tab, x);
   printf("tab[0]=%d, x=%d\n", tab[0], x);
}
