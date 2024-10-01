/*
 * =====================================================================================
 *
 *       Filename:  union2.c
 *
 *    Description:  Demo typu union
 *
 * =====================================================================================
 */

#include <stdio.h>

typedef enum { calkowity, rzeczywisty } typ;

typedef struct
{
   typ t;
   union 
   {
      int a;
      float b;
   };
} liczba;


int main()
{
  liczba x;

  x.t = calkowity;
  x.a = 5;

 if( x.t == calkowity) printf("x.a = %d\n", x.a); 
 if( x.t == rzeczywisty) printf("x.b = %f\n", x.b); 

  printf("sizeof = %d\n", sizeof(union liczba));

}

