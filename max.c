/*
 * =====================================================================================
 *
 *       Filename:  max.c
 *
 *    Description:  Funkcja wybierajaca maksymalny element z tablicy.
 *
 *        Version:  1.0
 *        Created:  01.11.2013 15:39:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAX  1000

float max(float t[], int n)
{
   float m = t[0];
   while( n > 1 )
   {
      n = n - 1;
      if( m < t[n] ) m = t[n];    
   }
   return m;
}

int main()
{
   float t[MAX], m;
   int i,n;

   /*  wczytywanie danych  */

   printf("Ile liczb (max. %d) : ",MAX);
   scanf("%d",&n);

   i=0;
   while(i<n)
   {
      printf("t[%d] = ",i);
      scanf("%f",&t[i]);
      i = i + 1;
   }

   m = max(t,n);
   printf("max=%f\n",m);

   return 0;
}
