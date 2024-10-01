/*
 * =====================================================================================
 *
 *       Filename:  operatory-priorytety.c
 *    Description:  Demonstracja kolejnosci wykonywania obliczen
 *         Author:  Marek Grochowski (2015), 
 *
 * =====================================================================================
 */

#include<stdio.h>


int main()
{
   int a, b=1, c=2;
   a = -b++ + ++c << 3 / 2 * (int)2.5 ;

   printf("a=%d, b=%d, c=%d\n", a ,b ,c);
   return 0;
}

