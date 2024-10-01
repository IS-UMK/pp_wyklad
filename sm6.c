/*
 * =====================================================================================
 *
 *       Filename:  sm2_tab.c
 *
 *    Description:  Srodek masy zbioru punktow. 
 *                  Chmura punktow reprezentowana struktura z tablica punktow materialnych.
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
   float x;
   float y;
   float z;
   float m;
};

struct chmura 
{
   int n ;
   struct punkt p[MAX];
};

void wypisz_punkt(struct punkt p)
{
   printf("x=%f y=%f z=%f m=%f\n",p.x,p.y,p.z,p.m);
}

void wypisz_chmure(struct chmura c)
{
    int i=0;
    while(i < c.n)
    {
       printf("%d: ",i);
       wypisz_punkt(c.p[i]);
       i = i + 1;
    }
}

struct punkt srodek(struct chmura c)
{
    struct punkt sm;
    int i=0;
    
    sm.m = 0.0; sm.x = 0.0; sm.y = 0.0; sm.z = 0.0;
    while(i<c.n) 
    {
         sm.m = sm.m + c.p[i].m; 
         sm.x = sm.x + c.p[i].x * c.p[i].m;
         sm.y = sm.y + c.p[i].y * c.p[i].m;
         sm.z = sm.z + c.p[i].z * c.p[i].m;
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
   printf("Podaj wsp. x,y,z i mase: ");
   scanf("%f %f %f %f",&p.x,&p.y,&p.z,&p.m);
   return p;
}

struct chmura dodaj(struct chmura c, struct punkt p)
{
   struct chmura c1 = c;
   
   if(c1.n < MAX) 
   {
      c1.p[c1.n] = p;
      c1.n = c1.n + 1;
   }
   return c1;
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
   struct chmura c;
   int i=0;

   c.n = 0;

   do
   {
      c = dodaj(c, wczytaj());
      i = i + 1;
   }while( czy_dalej() && i < MAX );

   printf("Aktualny zbior punktow:\n");
   wypisz_chmure(c);
   printf("Srodek masy:\n");
   wypisz_punkt(srodek(c));

   return 0;
}
