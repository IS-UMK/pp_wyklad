/*
 * =====================================================================================
 *
 *       Filename:  struct.c
 *
 *    Description:  Rozmiary struktur w zaleznosci od kolejnosci pol.
 *
 *        Version:  1.0
 *        Created:  05.12.2013 22:46:28
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

struct s1
{
   char c1;  /*  1 bajt */
   char c2;  /*  1 bajt */
   int  i1;  /*  4 bajty */
};

struct s2
{
   char c1;  /*  1 bajt */
   int  i1;  /*  4 bajty */
   char c2;  /*  1 bajt */
};


int main()
{
   char a[1];
   printf("s1 %d\ns2 %d\n",sizeof(struct s1),sizeof(struct s2)); 
   printf("a %d\n",sizeof(a)); 
}
