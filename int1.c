/*
 * =====================================================================================
 *
 *       Filename:  ints.c
 *    Description:  Limity zmiennych calkowitych ze znakiem 
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <limits.h>

int main()
{
   printf("sizeof:\n");
   printf("char          = %lu\n", sizeof (char));
   printf("short         = %lu\n", sizeof (short));
   printf("int           = %lu\n", sizeof (int));
   printf("long int      = %lu\n", sizeof (long int));
   printf("long long int = %lu\n", sizeof (long long int));
   printf("Zakresy:\n");
   printf("CHAR_MIN      = %d\n"  , CHAR_MIN);
   printf("CHAR_MAX      = %d\n"  , CHAR_MAX);
   printf("SHRT_MIN      = %d\n"  , SHRT_MIN);
   printf("SHRT_MAX      = %d\n"  , SHRT_MAX);
   printf("INT_MIN       = %d\n"  , INT_MIN);
   printf("INT_MAX       = %d\n"  , INT_MAX);
   printf("LONG_MIN      = %ld\n" , LONG_MIN);
   printf("LONG_MAX      = %ld\n" , LONG_MAX);
   printf("LLONG_MIN     = %lld\n", LLONG_MIN);
   printf("LLONG_MAX     = %lld\n", LLONG_MAX);
   
   return 0;
}
