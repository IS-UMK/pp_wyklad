/*
 * =====================================================================================
 *
 *       Filename:  sm3.c
 *
 *    Description:  Srodek masy. Punkt materialny reprezentowany struktura.
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
   float x, y, z;
   float m;
};

struct punkt srodek(struct punkt p1, struct punkt p2)
{
    struct punkt sm;
    sm.m = p1.m + p2.m;
    sm.x = ( p1.m * p1.x + p2.m * p2.x ) / sm.m;
    sm.y = ( p1.m * p1.y + p2.m * p2.y ) / sm.m;
    sm.z = ( p1.m * p1.z + p2.m * p2.z ) / sm.m;
    return sm;
}

struct punkt wczytaj()
{
   struct punkt p;
   printf("Podaj wsp. x,y,z i mase punktu : ");
   scanf("%f %f %f %f",&p.x,&p.y,&p.z,&p.m);
   return p;
}

void wypisz(struct punkt p)
{
   printf("x=%f\ny=%f\nz=%f\nm=%f\n",p.x,p.y,p.z,p.m);
}


int main()
{
    struct punkt p = { 0.0, 0.0, 0.0, 0.0 }; 
    struct punkt p1;
    char dalej='t';

    do
    {
      p1 = wczytaj();
      p = srodek(p1, p);
      
      printf("Czy dodac kolejny punkt [t/n] ? ");
      scanf(" %c", &dalej);
    }while(dalej != 'n' );

   printf("Srodek masy:\n");
   wypisz(p);

   return 0;
}
