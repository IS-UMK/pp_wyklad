/*
 * =====================================================================================
 *
 *       Filename:  toupper.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09.01.2014 20:36:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
/*   #include <ctype.h>   */

int islower(int x)
{
   if(x >= 'a' && x <= 'z' ) return 1;
   return 0;   
}

int toupper(int x)
{
   if(islower(x)) x = x + 'A' - 'a';
   return x;   
}

int main()
{
   int a;
   
   while( (a=getchar()) != EOF)
   {
      putchar(toupper(a));
   }

   return 0;
}

