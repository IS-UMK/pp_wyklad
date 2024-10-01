/*
 * =====================================================================================
 *
 *       Filename:  strindex.c
 *    Description:  Wyszukiwanie wzorca.
 *         Author:  Marek Grochowski (2020) 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>


/*  Zwraca pozycje tekstu 'w' w tekscie 't' lub -1 gdy nie znaleziono. */
int strindex(char t[], char w[])
{
   int i, k;
   
   i=0;
   while(t[i] != '\0')
   {
      k=0;
      while(t[i+k] == w[k] && w[k] != '\0') 
      {
         k = k + 1;
      }
      if(w[k] == '\0') return i;
      i = i + 1;
   }
   return -1;
}


#define MAXLINE 10000

int main()
{
   char tekst[MAXLINE], wzor[MAXLINE];
   int i, j, k;

   printf("Wprowadź tekst: ");
   fgets(tekst, MAXLINE, stdin);

   printf("Podaj szukany wzorzec: ");
   fgets(wzor, MAXLINE, stdin);

   /* usuniecie znaku nowej lini z konca */
   wzor[strlen(wzor)-1] = '\0';

   j = 0;
   do
   {
      i = strindex(tekst + j, wzor);

      if( i >= 0 ) printf("%d %s\n", j + i, tekst + j + i);

      j = j + i + 1;

   }while( i >= 0 );

   return 0;
}
