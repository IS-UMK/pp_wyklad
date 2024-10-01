/*
 * =====================================================================================
 *
 *       Filename:  f.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20.11.2018 09:21:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


/* Definicja funkcji  */
int jest_pierwsza ( int n )
{
   int i =2;
   while ( i<=n/i )
   {
      if ( n % i == 0 ) return 0 ;
      i = i + 1;
   }
   return 1 ;
}
