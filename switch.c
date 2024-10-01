/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *    Description:  Demonstracja dzialania instrukcji switch
 *        Created:  26.10.2014 21:05:37
 *         Author:  Marek Grochowski
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
   float x, y;
   char op;

   scanf("%f %c%f",&x, &op, &y);

   switch(op)
   {
      case '+' :
         printf("%f\n", x+y);
         break;
      case '-' :
         printf("%f\n", x-y);
         break;
      case '*' :
         printf("%f\n", x*y);
         break;
      case '/' :
         printf("%f\n", x/y);
         break;
      default:
         printf("Nieznana operacja: %c\n", op);
   }
   return 0;
}
