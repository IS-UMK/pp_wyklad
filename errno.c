
/*
 * =====================================================================================
 *
 *       Filename:  errno.c
 *    Description:  Demonstracja zastosowania kodow bledu errno
 *         Author:  Marek Grochowski 
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <errno.h>
#include <math.h>

int main()
{
   float x;
   
   x = sqrt(-1);
   if( errno == EDOM ) perror("Blad ");
   printf("sqrt(-1) = %f\n", x);

   return 0;
}

