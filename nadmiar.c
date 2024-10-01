/*
 * =====================================================================================
 *
 *       Filename:  nadmiar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.12.2013 21:07:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
   char a=126;
   char i=0;
   char c;
   
   while(i < 127)
   {
      c = a+i;
      printf("%d\n", c ); 
      i = i + 1;
   }
   return 0;   
}

