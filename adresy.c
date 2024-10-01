/*
 * =====================================================================================
 *
 *       Filename:  adresy.c
 *    Description:  Program wyswietla adres zmiennej.
 *        Created:  22.11.2013 00:03:13
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>

int a = 2;

int main()
{
   int b = 3; 

   printf("adres zmiennej a %p\n", &a);
   printf("adres zmiennej b %p\n", &b);

   return 0;
}
