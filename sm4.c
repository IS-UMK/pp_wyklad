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
   float x,y,z;
   float m;
};

void wypisz(struct punkt p)
{
   printf("x=%f y=%f z=%f m=%f\n",p.x,p.y,p.z,p.m);
}

struct punkt srodek(const struct punkt p[], int n)
{
    struct punkt sm;
    int i=0;
    
    sm.m = 0.0; sm.x = 0.0; sm.y = 0.0; sm.z = 0.0;
    
    while(i<n) 
    {
         sm.m = sm.m + p[i].m; 
         sm.x = sm.x + p[i].x * p[i].m;
         sm.y = sm.y + p[i].y * p[i].m;
         sm.z = sm.z + p[i].z * p[i].m;
         i = i + 1;
    }
    sm.x = sm.x/sm.m;
    sm.y = sm.y/sm.m;
    sm.z = sm.z/sm.m;
    return sm;
}

struct punkt wczytaj()
{
   struct punkt p;
   printf("Podaj wsp. x,y,z i mase punktu: ");
   scanf("%f %f %f %f",&p.x,&p.y,&p.z,&p.m);
   return p;
}

char czy_dalej()
{
   char dalej;
   printf("Czy dodac kolejny punkt [t/n] ? ");
   scanf(" %c",&dalej);
   if ( dalej=='t' || dalej == 'T' ) return 1;
   else return 0;
}

int main()
{
   struct punkt chmura[MAX];
   int i=0;

   do
   {
      chmura[i] = wczytaj();
      i = i + 1;
   }while(czy_dalej() == 1 && i < MAX );

   printf("Srodek masy:\n");
   wypisz(srodek(chmura,i));

   return 0;
}
