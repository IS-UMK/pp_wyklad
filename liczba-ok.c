/*
 * =====================================================================================
 *
 *       Filename:  liczba.c
 *
 *    Description:  Program z bledami  poprawiony- zabawy z liczbami.
 *
 *        Version:  1.0
 *        Created:  24.10.2013 23:50:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include<stdio.h>                          /* studio.h, srednik */

int main()                                               /* int */
{
   int n,i=1;             /* srednik, deklaracja, inicjalizacja */

   printf("Podaj liczbe calkowita  wieksza od zera : ");
   scanf("%d",&n);                             /* format, adres */

   if(n <= 0) 
   {                                                 /* nawiasy */
      if ( n==0 ) printf("To jest zero!\n");              /* == */
   }
   else
   {                                         
      printf("Dzielniki liczby %d:\n",n);
      while( i<=n )                 /* srednik, p. nieskonczona */
      {
         if( n % i == 0 )  printf("%d\n",i);      /* %d, \n, == */
         i = i + 1;
      }
   }
   return 0;
}
