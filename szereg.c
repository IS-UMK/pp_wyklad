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
   
   for(i=1; i<=n; i++) 
      x = x + 1.0/i;

   for(i=n; i>=1; i--) 
      y = y + 1.0/i;
   
   printf("x=%f\ny=%f\n",x,y);
   return 0;
}
