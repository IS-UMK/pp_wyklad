/*
 * =====================================================================================
 *
 *       Filename:  minmax1.c
 *
 *    Description:  Poszukiwanie elementu maksymalnego i minimalnego.
 *                  Dziel i zwyciezaj.
 *
 *        Version:  1.0
 *        Created:  28.11.2013 15:00:09
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
/*  Funkcja poszukuje maksimum i minimum. Algorytm optymalny.
    Aegumenty: 
       t[] tablica zawierajaca elementy   
       n - ilosc alementow w tablicy
       *min adres zmiennej gdzie zapisana zostanie wartosc minimalna
       *max adres zmiennej gdzie zapisana zostanie wartosc maksymalna
 */
void minmax(const float t[], int n, float *min, float *max)
{
   int i;
   float tmin, tmax;
   
   if( n==1 ){
      *min=t[0];
      *max=t[0];
      return;
   }
   
   if( t[0]<t[1] ){ 
      *min=t[0];  
      *max=t[1]; 
   }
   else{ 
      *min=t[1];  
      *max=t[0]; 
   }
   
   for( i=2; i < n-1; i=i+2 ){
      if( t[i]<t[i+1] ) { 
         tmin=t[i];   
         tmax=t[i+1]; 
      }
      else  { 
         tmin=t[i+1]; 
         tmax=t[i];   
      }
      if( *max<tmax ) *max=tmax;
      if( *min>tmin ) *min=tmin;
   }
   if( i == n-1 ){
      if( *max<t[i] ) *max=t[i];
      if( *min>t[i] ) *min=t[i];
   }
}

void wczytaj(float t[], int n)
{
   int i=0;
   while(i<n)
   {
      printf("t[%d] = ",i);
      scanf("%f",&t[i]);
      i = i + 1;
   }
}


int main()
{
   int n;
   float t[MAX], max, min;

   printf("Ile liczb (max. %d) : ", MAX);
   scanf("%d", &n);

   wczytaj(t, n);
   minmax(t, n, &min, &max); 
   printf("min=%f\nmax=%f\n", min, max);

   return 0;
}

