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
# include <stdio.h>
# include <math.h>

/*  w(x) = ax^2 - 2px + q = 0  */
/*  delta = 4(p^2 - qa) */

double const a = 2.1, q = 1e-6, p=1.1;

double w(double x) /*  wartość wielomianu w punkcie x */
{
   return(a*x*x - 2.0*p*x + q);
}

int main(void)
{
   double x1, x2, x1v, X1, X1v, X2;
   double Delta; /*  wartość Delty liczymy w podwójnej   precyzji */
   float  delta; /*  wartość delty liczymy w pojedynczej precyzji */

   delta = Delta = sqrt(p*p - q*a);
   printf("Wielomian w(x) = %e x^2 - %e x + %e.\nDelta = %e\n", a, 2*p, q, delta);

   /*  pierwiastki liczone wzorem szkolnym, z niedokładną deltą */
   x1 = (p - delta)/a;
   x2 = (p + delta)/a;

   /*  mniejszy pierwiatek, liczony z mało dokładną deltą, ale lepszym
    *    wzorem: Viete'a */
   x1v = (q/a)/x2;

   /*  pierwiastki liczone wzorem szkolnym, z dokładniejszą Deltą */
   X1 = (p - Delta)/a;
   X2 = (p + Delta)/a;

   /*  mniejszy pierwiatek, liczony z dokładniejszą Deltą, ale lepszym
    *    wzorem: Viete'a */
   X1v = (q/a)/X2;

   printf("\nPierwiastki z mało dokładną deltą:\n");
   printf(" Wzór szkolny: x1  = %e x2 = %e\n Wzór Viete'a: x1v = %e x2 = j.w.\n", 
         x1,x2,x1v);
   printf("\nPierwiastki z dokładniejszą Deltą:\n");
   printf(" Wzór szkolny: X1  = %e X2 = %e\n Wzór Viete'a: X1v = %e X2 = j.w.\n", 
         X1,X2,X1v);
   printf("\nWzględna zmiana wartości pierwiastka:\n");
   printf("   (x1 - x1v)/x1v = %e\n", (x1-x1v)/x1v);
   printf("   (x1v -X1v)/X1v = %e\n", (x1v-X1v)/X1v);
   printf("   (x2 -  X2)/X2  = %e\n", (x2-X2)/X2);

   printf("\nWartość wielomianu w wyznaczonych punktach:\n");
   printf(" w(x1)  = %e\n w(x1v) = %e w(X1v) = %e\n w(x2)  = %e\n w(X2) = %e\n ", 
         w(x1),w(x1v),w(X1v),w(x2),w(X2));

   return(0);
}
