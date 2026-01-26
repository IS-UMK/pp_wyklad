/*
 * =====================================================================================
 *
 *       Filename:  globalne.c
 *
 *    Description:  Demonstracja działania zmiennych globalnych.
 *
 *        Version:  1.0
 *        Created:  25.10.2013 23:20:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include<stdio.h>

int globalna = 0;

void f(void)
{
   int lokalna = 0;
   globalna = globalna + 1;  
   lokalna = lokalna + 1;
   printf("%d         %d      f\n", globalna, lokalna);
}

int main()
{
   int lokalna = 42;
   
   printf("globalna lokalna funkcja\n");
   printf("%d        %d      main\n", globalna, lokalna);
   f();
   printf("%d        %d      main\n", globalna, lokalna);
   f();
   printf("%d        %d      main\n", globalna, lokalna);
   return 0;
}
