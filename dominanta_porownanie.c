/*
 * =====================================================================================
 *
 *       Filename:  dominanta_porownanie.c
 *
 *    Description:   
 *                  Wersja szybsza.
 *
 *        Version:  1.0
 *        Created:  01.12.2013 22:58:45
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
#define MAX 1000000
#include<time.h>
/*  Funnkcja wyszukuje najczesciej wystepujacą liczbę w ciągu n liczb. 
 *  Argumenty:
 *    t[] - tablica zawirajaca liczby calkowite,
 *    n   - ilosc elementow,
 *    x   - adres zmiennej do ktorej zostanie postawiona ilosc wystapien znalezionego elementu.
 *    Wartoscia zwracana jest liczba najczesciej wystepujaca.
 *    Jezeli ciag zawiera wiecej niz jedna wartosc dominujaca to zwracana jest pierwsza napotkana. */
int dominanta1(const int *t, int n, int *c)
{
   int i, j, k, x;
  
   *c = 0;
   i=0;
   while( i<n )
   {
      k=0;
      j=0;
      while( j<n )
      {
         if ( t[i]==t[j] ) k = k + 1;
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

int dominanta2(const int *t, int n, int *c)
{
   int i, j, k, x;
  
   *c=0;
   x=t[0]-1;
   i=0;
   while( i<n-*c )
   {
      if( t[i]!=x )
      {
         k=1;
         j=i+1;
         while( j<n )
         {
            if ( t[i]==t[j] ) k = k + 1;
            j = j + 1;   
         }
         if( k > *c ) 
         {
            *c = k;
            x = t[i];
         }
      }
      i = i + 1;
   }
   return x;
}

int *wczytaj(int *t, int n)
{
   int i=0;

/*    printf("Podaj %d liczb calkowitych\n",n); */
   while(i<n)
   {
      scanf("%d",t+i);
      i = i + 1;
   }
   return t;
}

int *wypelnij(int *t, int n)
{
   int i=0;

/*    printf("Podaj %d liczb calkowitych\n",n); */
   while(i<n)
   {
      t[i]=rand() % 1000;
      i = i + 1;
   }
   return t;
}

int main()
{
   int n, x, i, xi;
   int t[MAX];
   clock_t tik, tak;
   float t1;
   int k = 10, step, n1;
   n=50000;

/*     scanf("%d",&n);
   if(n<1 || n>MAX) 
   {
      printf("Niepoprawna wartosc\n");
      exit(1);
   }
   
   wczytaj(t,n); 
   */
   printf("n=%d\n",n);
   wypelnij(t,n);
   step=n/k;

   fflush(stdout);
   printf("Metoda 1\n");
   i=1;
   n1=step;
   while(i<=k) 
   {
      tik=clock();
      x = dominanta1(t, n1, &xi);
      tak=clock();
      t1=((float)(tak-tik)/CLOCKS_PER_SEC);
      printf("n %d  czas %f dominanta %d ilosc %d\n", n1, t1, x, xi);
      fflush(stdout);
      n1 = n1 + step; 
      i = i + 1;
   }
   
   printf("Metoda 2\n");
   i=1;
   n1=step;
   while(i<=k) 
   {
      tik=clock();
      x = dominanta2(t, n1, &xi);
      tak=clock();
      t1=((float)(tak-tik)/CLOCKS_PER_SEC);
      printf("n %d  czas %f dominanta %d ilosc %d\n", n1, t1, x, xi);
      fflush(stdout);
      n1 = n1 + step; 
      i = i + 1;
   }
   return 0;
}
