/*
 * =====================================================================================
 *
 *       Filename:  epsilon.c
 *
 *    Description: Wyznaczanie epsilonu maszynowego, tzn. najmniejszej 
 *                 wartosci ktora mozna dodac do jedynki w zmiennopozycyjnej arytmetyce.
 *
 *        Version:  1.0
 *        Created:  15.12.2013 19:20:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski 
 *                  na podstawie strony Wikipedi: 
 *                  http://pl.wikibooks.org/wiki/C/Zaawansowane_operacje_matematyczne  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <float.h>

int main()
{
   float epsilon = 1.0;
   float p_epsilon = 1.0;
   float x = 1.0;

   printf( "epsilon         1.0 + epsilon\n" );

   while (x + epsilon != 1.0)
   {
      printf( "%e\t%.20f\n", epsilon, (x + epsilon) );
      p_epsilon = epsilon;
      epsilon = epsilon / 2;
   }
   printf( "\nObliczony epsilon: %e\n", p_epsilon );
   printf( "FLT_EPSILON      : %e\n", FLT_EPSILON );
   return 0;
}
