/*
 * =====================================================================================
 *
 *       Filename:  dominanta1.c
 *
 *    Description:  Wyszukiwanie najczęściej występującego elementu w zbiorze.
 *
 *        Version:  1.0
 *        Created:  01.12.2013 22:16:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
/*  Funnkcja wyszukuje najczesciej wystepujacą liczbę w ciągu n liczb. 
 *  Argumenty:
 *    t[] - tablica zawirajaca liczby calkowite,
 *    n   - ilosc elementow,
 *    x   - adres zmiennej do ktorej zostanie postawiona ilosc wystapien znalezionego elementu.
 *    Wartoscia zwracana jest liczba najczesciej wystepujaca.
 *    Jezeli ciag zawiera wiecej niz jedna wartosc dominujaca to zwracana jest pierwsza napotkana. */
int dominanta(const int *t, int n, int *c)
{
   int i, j, k, x;
  
   *c = 0;
   i = 0;
   while( i < n )
   {
      k = 0;
      j = 0;
      while( j<n )
      {
         if ( t[i] == t[j] ) k = k + 1;
         j = j + 1;   
      }
      if( k > *c ) 
      {
         *c = k;
         x = t[i];
      }
      i = i + 1;
   }
   return x;
}

int *wczytaj(int *t, int n)
{
   int i=0;

   printf("Podaj %d liczb calkowitych\n",n);
   while(i<n)
   {
      scanf("%d",t+i);
      i = i + 1;
   }
   return t;
}

int main()
{
   int n, x, i;
   int t[MAX];

   printf("Ile liczb (nie wiecej niz %d) ? ", MAX); 
   scanf("%d",&n);

   if(n<1 || n>MAX) 
   {
      printf("Niepoprawna wartosc\n");
      exit(1);
   }
   
   wczytaj(t,n); 
   x = dominanta(t, n, &i);
   printf("Liczba %d wsytepuje %d razy\n", x, i);
   
   return 0;
}
