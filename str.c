#include <stdio.h>

/*	Funkcja wczytuje do tablicy 't' jedna linie tekstu z klawiatury (ale nie wiecej niz 'n' znakow).
 *	Wartoscia zwracana jest adres do tablizy znakow zawierajacej wczytany tekst. Funkcja pomija znak nowej linii.
 */
char *czytajlinie( char *t, int n)
{
   char *r=t;
   
   while((*t=getchar()) != '\n' && --n > 0 && *t != EOF)  t++;
   
   *t='\0';

   return r;
}

/* Funkcja oblicza dlugosc napisu 't'.
 * Wartoscia zwracana jest liczba znakow w lancuchu (stringu) 't'
 */
int dlugosc(char *t)
{
   int i=0;
   while(*t++ != '\0') i++;
   return i;
}


/* Funkcja kopiuje zawartosc tablicy 't2' do tablicy 't1'.
 * Wartoscia zwracana jest adres (wskaznik) do skopiowanej tablicy znakow 't1'.*/
char* kopia(char *t1, char *t2)
{
   char *r=t1;

   while(*t1++ = *t2++)  ;
   
   return r;
}

/* Funkcja zamienia w napisie 's' wszystkie znaki pisane mala litera (a-z) na litery duze (A-Z). 
 * Wartoscia zwracana jest adres (wskaznik) do tablicy zawierajacej zmodyfikowany tekst.*/
char* malenaduze(char *t)
{
   char *x=t;
   while(*t)
   {
      if(*t <= 'z' && *t >= 'a') *t -= 'a'-'A'; 
      t++;
   }
   return x;
}

/* Funkcja laczy dwa napisy. Napis z tablicy 't2' jest dodawany na koncu napisu 't1'.
 * Wartoscia zwracana jest adres (wskaznik) do tablicy zawierajacej polaczone napisy.*/
char* sklej(char *t1, char *t2)
{
   kopia(t1+dlugosc(t1),t2);
   return t1;
}

/* Funkcja porownuje dwa napisy 's1' i 's2'. 
 * Wartoscia zwracana jest 1 gdy napisy sa identyczne lub 0 gdy napisy sie roznia.  */
int porownaj(char *s1,char *s2)
{
   while(*s1)
   {
      if( *s1 != *s2 ) return 0;
      s1++;
      s2++;
   }
   return *s2 == '\0';
}
