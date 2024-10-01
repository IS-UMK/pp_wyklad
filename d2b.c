/*
 * =====================================================================================
 *
 *       Filename:  d2b.c
 *
 *    Description:  Zamiana systemu dziesietnego na binarny.
 *
 *        Version:  1.0
 *        Created:  05.12.2013 23:14:36
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

void wypisz(int *t,int n)
{

   int i=0;
   while( i<n )
   {
      printf("%d",t[i]);
      i=i+1;
   }
}

int d2b(int x,int *t)
{
   int i=0,n=0;
   int z;
   do{
      t[n] = x % 2;
      x = x / 2;
      n = n + 1;
   }while( x >= 1 );
   
   i=0; 
   while( i < n/2 )
   {
      z=t[i];
      t[i]=t[n-i-1];
      t[n-i-1]=z;
      i = i + 1;
   }
   return n;
}


int main()
{
   int t[32];
   int x,n;

   scanf("%d",&x);
   n=d2b(x,t);
   wypisz(t,n);
   printf("\n");
   printf("0%o\n0x%x\n%d\n",x,x,x);
   return 0;
}
