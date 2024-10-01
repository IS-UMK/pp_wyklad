/*
 * =====================================================================================
 *
 *       Filename:  przeszukiwanie.c
 *
 *    Description:  Przeszukiwanie liniowe z wartownikiem.
 *
 *        Version:  1.0
 *        Created:  04.11.2013 10:25:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAX 1000000
/*  Funkcja poszukuje elementu 'x' w tablicy 't' poczynajac od
 *  indeksu 'i'. 
 *  t - tablica liczb zalokowitych
 *  n - ilosc elementow tablicy 
 *  x - szukany element
 *  i - poczatek szukania (indeks).
 *  Wartoscia zwracana jest indeks pierwszego znalezionego elementu
 *  lub wartosc -1 gdy nie odnaleziono. 
 *  Uwaga: funkcja umieszcza wartownika w tablicy na pozycji t[n]. */
int szukaj2(int t[], int n, int x, int i)
{
   t[n] = x;              /* ustawienie wartownika */
   while( t[i] != x ) i = i + 1;
   if( i != n ) return i;
   return -1;
}

void wczytaj(int t[], int n)
{
   int i=0;
   while(i<n)
   {
      printf("t[%d] = ",i);
      scanf("%d",&t[i]);
      i = i + 1;
   }
}


int main()
{
   int t[MAX], i, n, x, m;

   /*  wczytywanie danych  */
   printf("Ile liczb (max. %d) : ",MAX);
   scanf("%d",&n);

   wczytaj(t,n);
   
   printf("Czego szukasz ?\nx = ");
   scanf("%d",&x);
   printf("Element %d wystepuje na pozycji:\n", x);
   
   i = 0, m = -1;
   do
   {
      m = szukaj2(t,n,x,i);
      if ( m != -1 ) printf("%d\n", m);
      i = m + 1;
   }while( m >= 0);

   return 0;
}

