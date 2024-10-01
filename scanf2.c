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
   float a;
   int i=0;
   char c;

   while(i!=1)
   {
      i=scanf("%f",&a);
      if(i!=1) scanf("%c",&c);

      printf("a=%f i=%d\n",a,i);
   }

}

