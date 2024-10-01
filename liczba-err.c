/*
 * =====================================================================================
 *
 *       Filename:  liczba.c
 *
 *    Description:  Program z bledami - zabawy z liczbami.
 *
 *        Version:  1.0
 *        Created:  24.10.2013 23:50:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<studio.h>;

char main()
{
   int n

   printf("Podaj liczbe calkowita wieksza od zera: ");
   scanf("%f",n);

   if(n <= 0) 
      if ( n=0 ) printf("To jest zero!\n");
   else
   {
      printf("Dzielniki liczby %d:\n ",n);
      int i;
      while( i<n );
      {
         if( n % i )  printf("%c/n",i);
         i = i + 1;
      }
   }
   return 0;
}
