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
   char znak = 'A';
   float pi;
 
   plik = fopen( "plik.txt", "r" );
   if( plik == NULL )
   {
      perror("Wystapil blad");
      return 1;
   }

   while( feof(plik) == 0 )
   {
      znak = fgetc(plik);
      if (znak != EOF) printf("%c\n");
      if (znak == '=' ) {
         fscanf(plik, "%f", &pi);
         }
   }
   fclose( plik );
   
   printf("pi=%f\n",pi);
   return 0;
}
