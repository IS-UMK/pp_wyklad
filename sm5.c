/*
 * =====================================================================================
 *
 *       Filename:  sm2_tab.c
 *
 *    Description:  Srodek masy zbioru punktow. Chmura punktow reprezentowana tablica struktur.
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
#define MAX 1000

struct punkt
{
   float wsp[3];
   float m;
};

void wypisz(struct punkt p)
{
   printf("x=%f y=%f z=%f m=%f\n",p.wsp[0],p.wsp[1],p.wsp[2],p.m);
}

struct punkt srodek(struct punkt p[], int n)
{
    struct punkt sm;
    int i=0;
    
    sm.m = 0.0;
    sm.wsp[0] = 0.0;
    sm.wsp[1] = 0.0;
    sm.wsp[2] = 0.0;
    while(i<n) 
    {
         sm.m = sm.m + p[i].m; 
         sm.wsp[0] = sm.wsp[0] + p[i].wsp[0] * p[i].m;
         sm.wsp[1] = sm.wsp[1] + p[i].wsp[1] * p[i].m;
         sm.wsp[2] = sm.wsp[2] + p[i].wsp[2] * p[i].m;
         i = i + 1;
    }
    sm.wsp[0] = sm.wsp[0]/sm.m;
    sm.wsp[1] = sm.wsp[1]/sm.m;
    sm.wsp[2] = sm.wsp[2]/sm.m;
    return sm;
}

struct punkt wczytaj()
{
   struct punkt p;
   printf("Podaj wsp. x,y,z i mase: ");
   scanf("%f %f %f %f",&p.wsp[0],&p.wsp[1],&p.wsp[2],&p.m);
   return p;
}


int main()
{
    struct punkt p[MAX];
    char dalej='t';
    int i=0;

    do
    {
      printf("Punkt %d\n",i);
      p[i] = wczytaj();
      printf("Aktualny srodek masy:\n");
      wypisz(srodek(p,i+1));
      printf("Czy dodac kolejny punkt [t/n] ? ");
      scanf(" %c",&dalej);
      i = i + 1;
    }while(dalej != 'n' && i < MAX );

   printf("Srodek masy:\n");
   wypisz(srodek(p,i));

   return 0;
}
