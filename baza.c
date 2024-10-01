/*
 * =====================================================================================
 *
 *       Filename:  baza.c
 *    Description:  Baza danych. Operacje na plikach.
 *         Author:  Marek Grochowski, (2014)
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LINE 500
#define RECORDS 500

struct piosenka
{
   char tytul[MAX_LINE];
   char wykonawca[MAX_LINE];
   float czas;
};

int menu()
{
   int x;
   printf("0- wyjscie\n1-Dodaj wpis\n2-Wyswietl\n");
   while( scanf("%d", &x) != 1 ) ;
   return x;
}

int czytaj_piosenke(FILE *p, struct piosenka *m)
{
   if(feof(p)) return EOF;
   if(fgets((*m).tytul, MAX_LINE, p) == NULL) return 1;
   if(strlen((*m).tytul) > 0 ) (*m).tytul[strlen((*m).tytul)-1]='\0';
   if(fgets((*m).wykonawca, MAX_LINE, p) == NULL) return 1;
   if(strlen((*m).wykonawca) > 0 ) (*m).wykonawca[strlen((*m).wykonawca)-1]='\0';
   if(fscanf(p, "%f", &(*m).czas) == 0 ) return 1;
   while(fgetc(p)!='\n');
  return 0;
}

int main()
{
   char nazwa[MAX_LINE];
   FILE *plik;
   int opt=0, n, i, czy_blad = 0;
   struct piosenka playlista[RECORDS];
   struct piosenka tmp;

   printf("Podaj nazwe pliku: ");
   fgets(nazwa, MAX_LINE, stdin);
   if(strlen(nazwa)>0) nazwa[strlen(nazwa)-1]='\0';

   plik = fopen(nazwa,"r");
   if ( plik == NULL )
   {
      fprintf(stderr, "Blad otwarcia pliku %s\n", nazwa);
      exit(1);
   }

   i=0;
   while( i< RECORDS && czy_blad == 0 )
   {
       czy_blad = czytaj_piosenke(plik, playlista + i); 
       i = i + 1;
   }
   n=i-1;

   do
   {
      opt = menu();    
      if( opt == 1)
      {
         printf("Podaj tytul, wykonawce i czas : \n");
         czy_blad = czytaj_piosenke(stdin, playlista + n);
         if( n< RECORDS && czy_blad == 0 ) n = n + 1;
      
      }
      if( opt == 2)
      {
         printf("\n");
         i=0;
         while( i< n)
         {
            printf("[%d] %s - %s [%f]\n", i+1, playlista[i].wykonawca, playlista[i].tytul, playlista[i].czas);
            i = i + 1;
         }
         printf("\n");
      }
   
   }while( opt !=0 );
   
   return 0;

}

