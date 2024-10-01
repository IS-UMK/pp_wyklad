/*
 * =====================================================================================
 *
 *       Filename:  pierwiastki.c
 *
 *    Description:  Wyznaczanie pierwiaskow rownania kwadratowego.
 *
 *        Version:  1.0
 *        Created:  08.12.2013 17:37:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */

/*  dane z Syslo: a=1 b=-6.433 c=0.009474 
 *  wynik poprawny x1= 0.001473 x2=6.431*/
#include <stdio.h>
#include<math.h>

int pierwiastki(float a,float b, float c, float *x1, float *x2)
{
   float delta = b*b-4*a*c; 
   if(delta<0) return 0; 
   if(delta == 0)
   {
      *x1 = -0.5 * b /a ;
      return 1;
   }
   
   *x1=0.5*(-b-sqrt(delta))/a;
   *x2=0.5*(-b+sqrt(delta))/a;

   return 2;
}

int main()
{
   float a,b,c;
   float x1,x2;
   int imz;
   
   printf("Podaj wsp. wielomian (a,b,c)\n");
   scanf("%f %f %f",&a,&b,&c);
   
   imz = pierwiastki(a,b,c,&x1,&x2);

   if(imz == 0) printf("Brak miejsc zerowych \n");
   if(imz == 1) printf("Jedno miejsce zerowe x1=%f\n",x1);
   if(imz == 2) printf("x1=%f, x2=%f\n",x1,x2);
   printf("Sprawdzam: f(%f)=%f f(%f)=%f\n",x1, a*x1*x1+b*x1+c, x2, a*x2*x2+b*x2+c);


   return 0;
}
