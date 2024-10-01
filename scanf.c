/*
 * =====================================================================================
 *
 *       Filename:  scanf.c
 *
 *    Description:  Demonstracja dzialania scanf().
 *
 *        Version:  1.0
 *        Created:  24.10.2013 21:05:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   char c;

   while(1)
   {
      scanf(" %c",&c);

      printf("c=%c %d %x\n",c,c,c);
   }

}

