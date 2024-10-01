/*
 * =====================================================================================
 *
 *       Filename:  union1.c
 *
 *    Description:  Demo typu union
 *
 * =====================================================================================
 */

#include <stdio.h>

union ufloat
{
   float f;
   unsigned int i;
   unsigned char c[4];
};

int main()
{
  union ufloat f;

  f.f = 3.14;

  printf("f=%f\ni=%d [%x]\nc=%d %d %d %d [%x %x %x %x]\n", f.f, f.i, f.i, f.c[3], f.c[2], f.c[1], f.c[0], f.c[3], f.c[2], f.c[1], f.c[0]);

  f.c[0]=0;

  printf("f=%f\ni=%d [%x]\nc=%d %d %d %d [%x %x %x %x]\n", f.f, f.i, f.i, f.c[3], f.c[2], f.c[1], f.c[0], f.c[3], f.c[2], f.c[1], f.c[0]);

  printf("%p\n%p\n%p\n", &f.f, &f.i, &f.c[0]);

}

