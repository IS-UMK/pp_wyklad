/*
 * =====================================================================================
 *
 *       Filename:  minmax3.c
 *
 *    Description:  Porownanie algorytmow wyszukiwania elementu maksymalnego i minimalnego.
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
#include <stdint.h>
#include <stdlib.h>
#define MAX 20000
#include<time.h>
/*  Funkcja poszukuje maksimum i minimum. Algorytm optymalny.
    Aegumenty: 
       t[] tablica zawierajaca elementy   
       n - ilosc alementow w tablicy
       *min adres zmiennej gdzie zapisana zostanie wartosc minimalna
       *max adres zmiennej gdzie zapisana zostanie wartosc maksymalna
 */
void minmax1(float t[], int n, float *min, float *max)
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

void minmax2(float t[], int n, float *min, float *max)
{
   int i = 2;
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
   
   while( i < n-1 ){
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
      i = i + 2;
   }
   if( i == n-1 ){
      if( *max<t[i] ) *max=t[i];
      if( *min>t[i] ) *min=t[i];
   }
}

void minmax3(float t[], int n, float *min, float *max)
{
   int i = 1;
   *min=t[0];
   *max=t[0];
   
   while( i < n)
   {
      if( *min > t[i] ) *min = t[i];
      else if( *max < t[i] ) *max = t[i];
      i = i + 1;
   }
}

void wczytaj(float t[], int n)
{
   int i=0;
   while(i<n)
   {
      /*  printf("t[%d] = ",i); */
      scanf("%f",&t[i]);
      i = i + 1;
   }
}

float *wypelnij(float *t, int n)
{
   int i=0;

   while(i<n)
   {
      t[i] = 100 * (double)rand()/RAND_MAX ;
      i = i + 1;
   }
   return t;
}

int main()
{
   float t[MAX];
   float max, min , t1, t2, t3;
   clock_t tik, tak; 
   int i,k = 100000, n;

   /*   printf("Ile liczb (max. %d) : ", MAX); */
   // scanf("%d", &n);
 
 //  wczytaj(t, n);
   srand(time(0));

   wypelnij(t, MAX);
   fflush(stdout);

   printf("                   n           czas         min         max\n");
   for(n=2; n < MAX; n=n*2 )
   {
      tik=clock();
      i=0;
      while(i<k) 
      {
         minmax1(t, n, &min, &max); 
         i = i + 1;
      }
      tak=clock();
      t1=((float)(tak-tik)/CLOCKS_PER_SEC);
      printf("metoda 1: %10d %15.6f  %f  %f\n", n, t1, min, max);
   }

   fflush(stdout);

   printf("\n");
   for(n=2; n < MAX; n=n*2 )
   {
      tik=clock();
      i=0;
      while(i<k) 
      {
	 min = -1; max= -1;
         minmax2(t, n, &min, &max); 
         i = i + 1;
      }
      tak=clock();
      t1=((float)(tak-tik)/CLOCKS_PER_SEC);
      printf("metoda 2: %10d %15.6f %f %f\n", n, t1, min, max);
   }
   fflush(stdout);

   printf("\n");
   for(n=2; n < MAX; n=n*2 )
   {
      tik=clock();
      i=0;
      while(i<k) 
      {
         minmax3(t, n, &min, &max); 
         i = i + 1;
      }
      tak=clock();
      t1=((float)(tak-tik)/CLOCKS_PER_SEC);
      printf("metoda 3: %10d %15.6f %f %f\n", n, t1, min, max);
   }

   return 0;
}

