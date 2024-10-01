/*
 * =====================================================================================
 *
 *       Filename:  kolo.c
 *
 *    Description:  Program demonstracyjny wyznaczajacy pole i obwod kola.
 *
 *        Version:  1.0
 *        Created:  19.10.2013 22:47:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS 
 *
 * =====================================================================================
 */
#include <stdio.h>
#define PI 3.14159

int main()
{
   float r, pole, obw;

   printf("Podaj promien kola\nr= ");  
   scanf("%f",  &r);
   
   pole = PI * r * r;
   obw  = 2 * PI * r;
   
   printf("Pole kola o promieniu %f wynosi %f\n", r, pole);
   printf("Obwod kola o promieniu %f wynosi %f\n", r, obw);
   
   return 0;
}

