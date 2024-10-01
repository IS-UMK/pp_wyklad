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
   float pi = 3.1415;
 
   plik = fopen( "plik.txt", "w" );
   if(plik != NULL )    
   {
      /* Tutaj operacje na pliku */
      fprintf(plik,"Witaj swiecie!\nPI=%f\n", pi);
      fclose( plik );
   }
   else
   {
      /* Obsluga bledu otwarcia pliku */   
      printf("Blad otwarcia pliku %s\n", "plik.txt" );
   }
   return 0;
}
