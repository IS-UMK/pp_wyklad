/*
 * =====================================================================================
 *
 *       Filename:  struct2.c
 *
 *    Description:  Demonstracja uzycia struct, typedef i wsk. do struktur
 *
 * =====================================================================================
 */

#include <stdio.h>

typedef enum { M, K } plec;

typedef struct 
{
   char nazwisko[100];
   int indeks;
   plec p;
} student;

void wypisz_studenta(const student *s)
{
   printf("Nazwisko: %s\n", s->nazwisko);
   printf("Indeks  : %d\n", (*s).indeks); 
   printf("Plec    : %s\n", s->p == M ? "M" : "K");
}

int main()
{
   student s = {"Zenon Adamski", 123456, M};
   wypisz_studenta(&s);
   return 0;
}
