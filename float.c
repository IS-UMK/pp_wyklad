/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *    Description:  Ograniczenia typow zmiennopozycyjnych
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <float.h>

int main()
{
   printf("Limity typu float:\n");
   printf("sizeof(float)        : %lu\n", sizeof(float));
   printf("Najwieksza wartosc   : %e\n", FLT_MAX );
   printf("Najmniejsza dodatnia : %e\n", FLT_MIN );
   printf("Epsilon maszynowy    : %e\n", FLT_EPSILON );
   printf("Cyfry znaczace       : %d\n", FLT_DIG );

   printf("\nLimity typu double:\n");
   printf("sizeof(double)       : %lu\n", sizeof(double));
   printf("Najwieksza wartosc   : %e\n", DBL_MAX );
   printf("Najmniejsza dodatnia : %e\n", DBL_MIN );
   printf("Epsilon maszynowy    : %e\n", DBL_EPSILON );
   printf("Cyfry znaczace       : %d\n", DBL_DIG );

   printf("\nLimity typu long double:\n");
   printf("sizeof(long double)  : %lu\n", sizeof(long double));
   printf("Najwieksza wartosc   : %Le\n", LDBL_MAX );
   printf("Najmniejsza dodatnia : %Le\n", LDBL_MIN );
   printf("Epsilon maszynowy    : %Le\n", LDBL_EPSILON );
   printf("Cyfry znaczace       : %d\n" , LDBL_DIG );

   return 0;
}
