/*
 * =====================================================================================
 *
 *       Filename:  szereg.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09.12.2013 00:13:37
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
   float x=0.0, y=0.0;
   int i=1, n;
   
   printf("n="); scanf("%d", &n);
   
   while(i <= n)
   {
      x = x + 1.0/i;
      y = y + 1.0/(n-i+1);
      i = i + 1;
   }
   
   printf("x=%f\ny=%f\n",x,y);
   return 0;
}
