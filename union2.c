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

union liczba
{
   float f;
   unsigned int i;
   unsigned char c;
};

int main()
{
  union liczba x;

  x.f = 3.14;

  printf("sizeof = %d\n", sizeof(union liczba));

  printf("adres pola f = %p\n", &x.f);
  printf("adres pola i = %p\n", &x.i);
  printf("adres pola c = %p\n", &x.c);

  printf("wartosc pola f = %f\n", x.f);
  printf("wartosc pola i = %x\n", x.i);
  printf("wartosc pola c = %x\n", x.c);

}

