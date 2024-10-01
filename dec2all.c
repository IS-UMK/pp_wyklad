/*
 * =====================================================================================
 *
 *       Filename:  dec2all.c
 *
 *    Description:  Zamiana z systemu dziesietnego do systemu o innej podstawie 2-9.
 *
 *        Version:  1.0
 *        Created:  05.12.2013 23:14:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

/* Funkcja wyswietla w odwrotnej kolejnosci 'n' liczb dziesietnych z tablicy 't */
void wypisz(int *t,int n)
{
   while( n > 0 )
   {
      n = n - 1;
      if( t[n] < 10 ) printf("%d",t[n]);
      else if ( t[n] < 10 + 'Z' - 'A' ) printf("%c",t[n] - 10 + 'A');
      else printf("[%d]",t[n]);
   }
}

/*  Funkcja zamienia liczbe 'x' zapisujac ja w systemie pozycyjnym o podstawie 'p'.
 *  Kolejne cyfry zapisane sa w tablicy 't[]'.
 *  Tablica 't[]' powinna miec rozmiar dostatecznie duzy aby 
 *  pomiescic liczbe w nowej reprezentacji (wystarcza 32 elementy)
 *  Funkcja zwraca ilosc cyfr umieszczonych w tablicy. */
int zmien_podstawe(int x, int *t, int p)
{
   int i=0;
   
   while( x != 0 )
   {
      t[i] = x % p;
      x = x / p;
      i = i + 1;
   }
   return i;
}


int main()
{
   int t[32], x, n, i;

   printf("Liczba dziesietna: ");
   scanf("%d",&x);
 
   i=2;
   while( i<=16 )
   {
      n=zmien_podstawe(x,t,i);
      printf("%d: ",i);
      wypisz(t,n);
      printf("\n");
      i = i + 1;
   } 
   
   return 0;
}
