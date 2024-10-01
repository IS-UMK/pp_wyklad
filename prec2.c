/*
 * =====================================================================================
 *
 *       Filename:  prec.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05.12.2013 19:46:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#define EPS 0.000001

int main()
{
   float x = 0.1;
   
   if( fabs(x-0.1) < EPS ) 
      printf ("OK, %f jest rowne 0.1\n", x);
   else 
      printf("Nie OK, %f nie jest rowne 0.1\n", x);

   return 0;
}
