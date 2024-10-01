/*
 * =====================================================================================
 *
 *       Filename:  fopen.c
 *    Description:  Demonstracja podstawowych operacji na pliku
 *         Author:  Marek Grochowski (2014) 
 *
 * =====================================================================================
 */
#include<stdio.h>

int main()
{
   FILE *plik = NULL;
   int znak;
 
   plik = fopen( "plik.txt", "r" );
   if( plik == NULL )
   {
      perror("Wystapil blad");
      return 1;
   }

   while( feof(plik) == 0 )
   {
      znak = fgetc(plik);
      if (znak != EOF) printf("%c\n", znak);
   }
   fclose( plik );
   
   return 0;
}
