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
   float a,b;

   while(1)
   {
      scanf("%f%f",&a,&b);

      printf("a=%f b=%f\n",a,b);
   }

}

