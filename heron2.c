/*
 * =====================================================================================
 *
 *       Filename:  heron2.c
 *
 *    Description:  Funkcja wyznaczajaca pole trojkata ze wzoru Herona.
 *
 *        Version:  1.0
 *        Created:  27.10.2013 12:58:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

/*  Funkcja wyznacza pole trojkata z wzoru Heroana.
 *  Argumenty a, b i c to dlugosci bokow.
 *  Jezeli boki a, b, i c nie tworza trojkata 
 *  zwracana jest wartosc -1. */
float heron(float a, float b, float c)
{
   float p = (a+b+c)/2;
   p = p*(p-a)*(p-b)*(p-c);
   if(p<0) return -1;
   return sqrt(p); 
}

int main()
{
   float a, b, c, pole;

   printf("Podaj dlugosci bokow trojkata: a, b, c > 0\n");
   scanf("%f%f%f", &a, &b, &c);

   if ( a <= 0 || b <= 0 || c<=0 ) 
   {
       printf("Zle dane: wartosci musza byc dodatnie.\n");
       return 1;
   }
   
   pole = heron(a, b, c);
   if( pole < 0 ) 
   {
      printf("Zle dane: to nie sa boki trojkata\n"); 
      return 2;
   }
   printf("Pole wynosi: %f\n", pole);

   return 0;
}

