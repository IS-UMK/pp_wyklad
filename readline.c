/*
 * =====================================================================================
 *
 *       Filename:  readline.c
 *
 *    Description:  Demonstracja funkcji wczytujacej linie tekstu ze standardowego wejscia.
 *                  Bezpieczna wersja funkcji gets().
 *         Author:  Marek Grochowski (2014) 
 *
 * =====================================================================================
 */
/* Funkcja wczytuje do tablicy 't' linie tekstu z klawiatury (ale nie wiecej niz 'n' znakow).
 *	Wartoscia zwracana jest adres tablicy 't' lub NULL jeżeli nastapil koniec pliki i zaden znak nie zostal wczytany.
 */
#include <stdio.h>

char *readline(char *t, int n)
{
   int i=0;
   
   t[i]=getchar();
   if(t[i] == EOF) return NULL;
   
   while(t[i] != '\n' && i<n && t[i] != EOF)
   {
      i=i+1;
      t[i]=getchar();
   }
   t[i]='\0';
   
   return t;
}

int main()
{
   char s[10];

   while(readline(s, 10))
      printf("%s\n", s);

   return 0;
}
