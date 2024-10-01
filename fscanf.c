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
#include<stdlib.h>

int main()
{
   FILE *plik = NULL;
   int x;
 
   plik = fopen( "dane.txt", "r" );
   if( plik == NULL )
   {
      perror("Wystapil blad");
      exit(1);
   }

   while( fscanf(plik, "%d", &x) > 0 )  printf("%d\n",x);
   fclose( plik );
   
   return 0;
}
