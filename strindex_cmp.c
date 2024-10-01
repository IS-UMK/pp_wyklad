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
#include <stdlib.h>
#include <time.h>
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

void create_wtab(int wtab[], char w[])
{
   int i=0;

   while(i<127)
   {
      wtab[i]=-1;
      i=i+1;
   }
   i=0;
   while(w[i] != '\0') 
   {
      wtab[w[i]]=i;
      i=i+1;
   }
}

/*  Zwraca pozycje tekstu 'w' w tekscie 't' lub -1 gdy nie znaleziono. 
 *  Uproszczona wersja alg.  Boyera-Moore */
int strindex2(char t[], char w[])
{
   int i, k, z, tl, wl;
   int wtab[127];

   create_wtab(wtab,w);
   tl=strlen(t);
   wl=strlen(w);
   
   i=0;
   while(i <= tl-wl)
   {
      k=wl-1;
      while(k>=0 && t[i+k]==w[k] ) k=k-1; 
      if(k==-1) return i;
      z=k-wtab[t[i+k]];
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

#define MAXLINE 4000001

char* genstr(char t[], int n, const char* str)
{
   int k, i;
   
   k=strlen(str);   
   i=0;
   while(i<n-1)
   {
      t[i]=str[rand()%k];
      i=i+1;
   }
   t[i]='\0';
   return t;
}

int main()
{
   char t[MAXLINE],s[MAXLINE];
   int i,j,z, maxk=1000;
   char *alfabet="abcdefgdijklm";
   char *wi;
   clock_t tik, tak;
   float t1;
   int textl, regl;
   int hit1=0, hit2=0, hit3=0;

   srand(time(0));

   printf("Dlugosc tekstu: ");
   scanf("%d", &textl);
   printf("Dlugosc wzorca: ");
   scanf("%d", &regl);
  
   if ((regl > MAXLINE )|| (textl > MAXLINE) )
   {
      printf("Error: Za dluzo znakow.");
      return 1;
   }

   genstr(t, textl+1, alfabet);
   genstr(s, regl+1, alfabet);
   
   printf("Ilosc powt.   : %d\n", maxk);
   printf("Alfabet       : %s\n",alfabet);
   printf("Wzorzec       : %s\n",s);

   printf("Metoda Naiwna : ");

   tik=clock();
   z=0;
   while(z<maxk)
   {
      i=-1;
      j=0;
      hit1=0;
      do
      {
         i=strindex(t+j,s);
         j=j+i+1;
         hit1++;
      }while(i>=0);
      z=z+1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("%f\n", t1);
   
   printf("Metoda B-M    : ");
   
   tik=clock();
   z=0;
   while(z<maxk)
   {
      i=-1;
      j=0;
      hit2=0;
      do
      {
         i=strindex2(t+j,s);
         j=j+i+1;
         hit2++;
      }while(i>=0);
      z=z+1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("%f\n", t1);
   if(hit1 != hit2) printf("Warning: liczba trafien rozna %d - %d\n", hit1-1, hit2-1);
   

   printf("strstr        : ");
   
   tik=clock();
   z=0;
   while(z<maxk)
   {
      i=-1;
      j=0;
      hit3=0;
      do
      {
         wi=strstr(t+j, s);
         j=(wi-t)+1;
         hit3++;
      }while(wi);
      z=z+1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("%f\n", t1);
   if(hit1 != hit3) printf("Warning: liczba trafien rozna %d - %d\n", hit1-1, hit3-1);

   printf("Ilosc trafien : %d\n", hit1-1);
   return 0;
}
