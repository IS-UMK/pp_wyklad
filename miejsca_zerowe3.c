/*
 * =====================================================================================
 *
 *       Filename:  miejsca_zerowe.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14.12.2013 20:17:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

#define EPS FLT_EPSILON

float wielomian(float x, float a, float b, float c)
{
   return x*x*a + x*b + c; 
}

int miejsca_zerowe(float a, float b, float c, float *x1, float *x2)
{
   float delta;

   if(fabs(a)<EPS )
   {
      if ( fabs(b) < EPS ) return 0;
      *x1 = -c/b;
      *x2 = *x1;
      return 1;
   }
  
   delta = b*b - 4*a*c;
   
   if( fabs(delta) < EPS )
   {
      *x1=-b/a/2;
      *x2=*x1;
      return 1;
   }

   if(delta >= EPS)
   {
      delta=sqrt(delta);
      *x1 = -(b-delta)/2/a;   
      *x2 = -(b+delta)/2/a;   
      return 2;
   }
   return 0;
}


int miejsca_zerowe2(float a, float b, float c, float *x1, float *x2)
{
   
   float delta;

   delta = b*b - 4*a*c;

   if( fabs(a) < EPS )
   {
      if ( fabs(b) < EPS ) return 0;
      *x1 = -c/b;
      *x2 = *x1;
      return 1;
   }
  
   if( fabs(delta) < EPS )
   {
      *x1=-b/a/2;
      *x2=*x1;
      return 1;
   }

   if( delta >= EPS )
   {
      delta=sqrt(delta);
      if(b < 0) *x1 =  (delta-b)/(2*a);   
      else      *x1 = -(b+delta)/(2*a);
      *x2 = (c/a)/ *x1;
      return 2;
   }
   return 0;
}


int main(void)
{
   float a,b,c ;
   float x1, x2;
   int n;
   
   printf("a="); scanf("%f",&a);
   printf("b="); scanf("%f",&b);
   printf("c="); scanf("%f",&c);
   
   printf("Wielomian w(x) = %e x^2 + %e x + %e.\n", a, b, c);

   n=miejsca_zerowe(a,b,c,&x1,&x2);
   if( n == 0) printf("Brak miejsc zerowych\n");
   else 
   {
      if ( n==1 ) printf("Jedno miejsce zeorowe, x=%f\n", x1);
      else printf("Dwa miejsca zerowe, x1=%e, x2=%e ",x1,x2);
      printf("w(x1)=%e, w(x2)=%e\n",wielomian(x1,a,b,c),wielomian(x2,a,b,c));
   }

   printf("Wzory Viet\'e\n");
   n=miejsca_zerowe2(a,b,c,&x1,&x2);
   if( n == 0) printf("Brak miejsc zerowychi\n");
   else 
   {
      if ( n==1 ) printf("Jedno miejsce zeorowe, x=%f\n", x1);
      else printf("Dwa miejsca zerowe, x1=%e, x2=%e ",x1,x2);
      printf("w(x1)=%e, w(x2)=%e\n",wielomian(x1,a,b,c),wielomian(x2,a,b,c));
   }
   return(0);
}
