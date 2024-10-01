/*
 * =====================================================================================
 *
 *       Filename:  sm2_tab.c
 *
 *    Description:  Srodek masy. Punkt materialny reprezentowany struktura z tablica.
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

struct punkt
{
   float wsp[3];
   float m;
};

struct punkt srodek(struct punkt p1, struct punkt p2)
{
    struct punkt sm;
    int i=0;
    sm.m=p1.m+p2.m;
    while(i<3) 
    {
         sm.wsp[i]=(p1.m*p1.wsp[i]+p2.m*p2.wsp[i])/sm.m;
         i = i + 1;
    }
    return sm;
}

struct punkt wczytaj()
{
   struct punkt p;
   printf("Podaj wsp. x,y,z i mase: ");
   scanf("%f %f %f %f",&p.wsp[0],&p.wsp[1],&p.wsp[2],&p.m);
   return p;
}

void wypisz(struct punkt p)
{
   printf("x=%f y=%f z=%f m=%f\n",p.wsp[0],p.wsp[1],p.wsp[2],p.m);
}


int main()
{
    struct punkt p1, p;
    char dalej = 't';
    int i = 1;
    p.m = 0.0;
    p.wsp[0] = p.wsp[1] = p.wsp[2] = 0.0; 

    do
    {
      printf("Punkt %d\n",i);
      p1 = wczytaj();
      p = srodek(p1, p);
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
