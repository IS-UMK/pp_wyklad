/*
 * =====================================================================================
 *
 *       Filename:  tmp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29.11.2015 23:15:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
   /*  Inicjalizacja tablicy */
   int tab[10] = { 1 , 5 , 10 };

   /*  Rozmiar zostanie okreslony automatycznie */
   float x[] = { 4.1, 5.1, -3.0};

   /*  Tablica zawierajaca znaki */
   char napis[] = { 'A' , 'B', 'C' };  

   /*  Napis (lacuch znakowy) */
   char napis2[] = "ABC";   


   struct student
   {
      int numer;
      char nazwisko[30];
   };

   struct student janek = { 13, "ABC"}; 
   struct student franek = { 5,  { 'A', 'B', 'C' } }; 

   
   printf("tab[0]=%d\n", tab[0]); 
   printf("x[0]=%f\n", x[0]); 
   printf("napis[0]=%c\n", napis[0]); 
   printf("napis2[0]=%c\n", napis2[0]); 

   printf("janek.numer=%d\n", janek.numer );
   printf("zenek.numer=%d\n", franek.numer );
   printf("janek.nazwisko=%s\n", janek.nazwisko);
   printf("zenek.nazwisko[1]=%c\n", franek.nazwisko[1] );









}

