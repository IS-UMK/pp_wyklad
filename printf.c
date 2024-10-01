/*
 * =====================================================================================
 *
 *       Filename:  printf.c
 *    Description:  Demonstracja formatowania argumentow printf
 *         Author:  Marek Grochowski (2015)
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   printf ("Znaki                  : %c %c \n", 'A', 65);
   printf ("Liczby calkowite       : %d \n", 123);
   printf ("  ze znakiem           : %+d \n", 123);
   printf ("  szesnastkowo         : %x %#x \n", 123, 123);
   printf ("  dopelnienie spacjami : %20d \n", 123);
   printf ("  dopelnienie zerami   : %020d \n", 123);
   printf ("Zmienopozycyjne        : %f \n", 3.1416);
   printf ("  notacja naukowa      : %e \n", 3.1416);
   printf ("  precyzja             : %.3f \n", 3.1416);
   printf ("  dopelnienie          : %20.3f \n", 3.1416);
   printf ("Szerokosc pola  *      : %*d \n", 20, 123);
   printf ("Precyzja  .*           : %20.*f \n", 3, 3.1416);
   printf ("Napis                  : %s \n", "Ala ma kota");
   printf ("  dopelnienie          : %20s \n", "Ala ma kota");
   printf ("  obciecie             : %20.5s \n", "Ala ma kota");

   return 0;
}
