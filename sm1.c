/*
 * =====================================================================================
 *
 *       Filename:  sm2_tab.c
 *
 *    Description:  Srodek masy. Punkt materialny reprezentowany tablicami 4 elementowymi. 
 *
 *        Version:  1.0
 *        Created:  12.11.2013 23:44:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>

void srodek(const float p1[], const float p2[], float sm[])
{
   int i=0;

   sm[3] = p1[3] + p2[3];

   for(i=0; i<3; i++)
      sm[i] = (p1[3] * p1[i] + p2[3] * p2[i]) / sm[3];
}

void wczytaj(float p[])
{
   printf("Podaj wsp. x,y,z i mase: ");
   scanf("%f %f %f %f",&p[0],&p[1],&p[2],&p[3]);
}

void wypisz(const float p[])
{
   printf("x=%f y=%f z=%f m=%f\n",p[0],p[1],p[2],p[3]);
}

void kopia(const float p1[], float p2[])
{
   int i=0;
   while(i<4)
   {
      p2[i] = p1[i];
      i = i + 1;
   }
}

int main()
{
   float p1[4], p2[4];
   float p[4] = { 0.0, 0.0 ,0.0, 0.0}; 
   char dalej = 't';
   int i = 1;

   do
   {
      kopia(p, p2);
      printf("Punkt %d\n",i);
      wczytaj(p1);
      srodek(p1, p2, p);
      printf("Aktualny srodek masy:\n");
      wypisz(p);
      printf("Czy dodac kolejny punkt [t/n] ? ");
      scanf(" %c", &dalej);
      i = i + 1;
   }while(dalej != 'n' );

   printf("Srodek masy:\n");
   wypisz(p);

   return 0;
}
