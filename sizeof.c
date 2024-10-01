/*
 * =====================================================================================
 *
 *       Filename:  sizeof.c
 *    Description:  Demonstracja użycia operatora sizeof
 *         Author:  Marek Grochowski (2014)
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <limits.h>

struct s {
   int a;
   char b[100];
};

int main()
{
   int tab[5]; 

   printf("CHAR_BIT          = %d\n", CHAR_BIT);
   printf("sizeof (char)     = %d\n", sizeof (char));
   printf("sizeof (int)      = %d\n", sizeof (int));
   printf("sizeof (long)     = %d\n", sizeof (long));
   printf("sizeof (float)    = %d\n", sizeof (float));
   printf("sizeof (double)   = %d\n", sizeof (double));
   printf("sizeof (int *)    = %d\n", sizeof (int*));
   printf("sizeof (char *)   = %d\n", sizeof (char*));
   printf("sizeof (struct s) = %d\n", sizeof (struct s));
   printf("sizeof tab        = %d\n", sizeof tab);

   return 0;
}
