/*
 * =====================================================================================
 *
 *       Filename:  minmax1.c
 *
 *    Description:  Poszukiwanie elementu maksymalnego i minimalnego.
 *
 *        Version:  1.0
 *        Created:  25.11.2013 13:00:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAX 1000
/*  Funkcja poszukuje jednoczesnie maksimum i minimum
    Aegumenty: 
       t[] tablica zawierajaca elementy   
       n - ilosc alementow w tablicy
       *min adres zmiennej gdzie zapisana zostanie wartosc minimalna
       *max adres zmiennej gdzie zapisana zostanie wartosc maksymalna
 */
void minmax(const float t[], int n, float *min, float *max)
{
   int i = 1;
   *min=t[0];
   *max=t[0];
   
   while( i < n)
   {
      if( *min > t[i] ) *min = t[i];
      if( *max < t[i] ) *max = t[i];
      i = i + 1;
   }
}

int wczytaj(float t[], int max)
{
   int i=0, n;
   
   printf("Ile liczb (max. %d) : ", max);
   scanf("%d", &n);
   
   if ( n > max ) n=max;

   while(i<n)
   {
      printf("t[%d] = ", i );
      scanf("%f", &t[i] );
      i = i + 1;
   }
   return i;
}


int main()
{
   int n;
   float t[MAX], max, min;

   n = wczytaj(t, MAX);
   minmax(t, n, &min, &max); 
   printf("min=%f\nmax=%f\n", min, max);

   return 0;
}

