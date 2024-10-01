/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *    Description:  Zabawy z lancuchami
 *         Author: Marek Grochowski (2014) 
 *
 * =====================================================================================
 */
#include<stdio.h>

int main()
{
   char *s1 = "nieciekawy fragment tekstu.";
   char s2[] = "Ala ma kota";
   
/*   s1[0]='N'; */
   s2[0]='E';
   
   printf(s1);
   printf(" %s\n", s2);
   
   printf("Bardzo %s\n", s1+3);
   
   return 0;
}
