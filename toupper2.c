/*
 * =====================================================================================
 *
 *       Filename:  toupper.c
 *    Description:  Zamiana malych liter na duze.
 *         Author:  Marek Grochowski (2013) 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>  

int main()
{
   int a;
   
   while( (a = getchar()) != EOF )
      putchar(toupper(a));

   return 0;
}

