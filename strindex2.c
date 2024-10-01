/*
 * =====================================================================================
 *
 *       Filename:  strindex.c
 *    Description:  Wyszukiwanie wzorca.
 *         Author:  Marek Grochowski (2014) 
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
      while(t[i+k]==w[k] && w[k] != '\0') 
         k = k + 1;
      if(w[k]=='\0') return i;
      i = i + 1;
   }
   return -1;
}

/* Funkcja tworzy tablice przesuniec dla algorytmu Boyera-Moore'a */
void utworz_tp(int tp[], char w[])
{
   int i=0;

   while(i<128)
   {
      tp[i]=-1;
      i=i+1;
   }

   i=0;
   while(w[i] != '\0') 
   {
      tp[w[i]]=i;
      i=i+1;
   }
}

/*  Zwraca pozycje tekstu 'w' w tekscie 't' lub -1 gdy nie znaleziono. 
 *  Uproszczona wersja alg.  Boyera-Moore'a */
int strindex2(char t[], char w[])
{
   int i, k, z, tl, wl;
   int tp[128];

   utworz_tp(tp,w);
   tl=strlen(t);
   wl=strlen(w);
   
   i=0;
   while(i <= tl-wl)
   {
      k=wl-1;
      while(k>=0 && t[i+k]==w[k] ) k=k-1; 
      if(k==-1) return i;
      z=k-tp[t[i+k]];
      if(z<1) z=1;
      i = i + z;
   }
   return -1;
}


/* Funkcja wczytuje linie tekstu ale nie wiecej niz n znakow.
 * Gdy pierwszym znakiem jest EOF funkcja zwraca NULL */
char *readline(char *t, int n)
{
   int i=0;
   
   t[i]=getchar();
   if(t[i] == EOF) return NULL;
   
   while(t[i] != '\n' && i<n-2 && t[i] != EOF)
   {
      i=i+1;
      t[i]=getchar();
   }
   if( i==n-2 ) i=i+1; 
   t[i]='\0';
   
   return t;
}


/*  Funkcja wyswietla napis t z wcieciem rownym x spacji.. */
void printx(int x, char t[])
{
    int k=0;
    while(k<x) 
    {  
       k=k+1;
       printf("%c",' ');
    }
    printf("%s\n",t);
}

#define MAXLINE 10000

int main()
{
   char t[MAXLINE],s[MAXLINE];
   int i,j,k, i2;

   printf("Podaj szukany wzorzec: ");
   readline(s,MAXLINE);


   printf("Podaj tekst. Aby zakonczyc program wprowadz pusta linie.\n");
   
   while(readline(t, 1000) != NULL && strlen(t)>0 )
   {
      i=-1;
      j=0;
      do
      {
         i=strindex(t+j, s);
//         i2=strindex2(t+j,s);
     //    if(i != i2) printf("Wynik strindex != strindex2 !!!\n");

         if(i>=0) printx(j+i, s);
         j=j+i+1;
      }while(i>=0);
   }

   return 0;
}
