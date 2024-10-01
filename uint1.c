/*
 * =====================================================================================
 *
 *       Filename:  ints.c
 *    Description:  Limity zmiennych calkowitych bez znaku 
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <limits.h>

int main()
{
   printf("sizeof\n");
   printf("unsigned char          = %lu\n", sizeof (unsigned char));
   printf("unsigned short         = %lu\n", sizeof (unsigned short));
   printf("unsigned int           = %lu\n", sizeof (unsigned int));
   printf("unsigned long int      = %lu\n", sizeof (unsigned long int));
   printf("unsigned long long int = %lu\n", sizeof (unsigned long long int));
   printf("Zakres:\n");
   printf("UCHAR_MAX              = %u\n"  , UCHAR_MAX);
   printf("USHRT_MAX              = %u\n"  , USHRT_MAX);
   printf("UINT_MAX               = %u\n"  , UINT_MAX);
   printf("ULONG_MAX              = %lu\n" , ULONG_MAX);
   printf("ULLONG_MAX             = %llu\n", ULLONG_MAX);
   
   return 0;
}
