/*
 * =====================================================================================
 *
 *       Filename:  pola-bitowe.c
 *    Description:  Demo pola bitowe
 *
 * =====================================================================================
 */
#include <stdio.h>

struct pb
{
   unsigned int x : 1;
   unsigned int y : 2;
   unsigned int z : 3;
};


int main()
{
   struct pb pole;

   printf("sizeof = %d\n", sizeof(pole));

   pole.x = 1;
   pole.y = 2;
   pole.z = 3;

   printf("x=%d, y=%d, z=%d\n", pole.x, pole.y, pole.z);
   pole.x++;
   pole.y++;
   pole.z++;

   printf("x=%d, y=%d, z=%d\n", pole.x, pole.y, pole.z);

   pole.x++;
   pole.y++;
   pole.z++;

   printf("x=%d, y=%d, z=%d\n", pole.x, pole.y, pole.z);

}
