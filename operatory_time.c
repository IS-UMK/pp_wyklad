#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*  Program porownujacy czasy operacji arytmetycznych na typie int i  float. */

int main(int argc,char **argv)
{
   int n = 100000,i,k;
   float x = 1.1, y=1.1, t1, x0;
   clock_t tik,tak;

   x0=1.1;

   if(argc > 1 ) n = atoi(*(argv+1));

   printf("n=%d x 100\n",n);


   i=0;
   tik=clock();
   while(i < n)
   {
      k=0;
      while(k<100)
      {
         x=x0;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         x = x * y;
         k = k + 1;
      }
      i = i + 1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("float * %f [%f]\n",t1,x);

   
   i=0;
   tik=clock();
   while(i < n)
   {
      k=0;
      while(k<100)
      {
         x=x0;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         x = x / y;
         k = k + 1;
      }
      i = i + 1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("float / %f [%f]\n",t1,x);
   i=0;
   tik=clock();
   while(i < n)
   {
      k=0;
      while(k<100)
      {
         x=x0;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         x = x + y;
         k = k + 1;
      }
      i = i + 1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("float + %f [%f]\n",t1,x);

   i=0;
   tik=clock();
   while(i < n)
   {
      k=0;
      while(k<100)
      {
         x=x0;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         x = x - y;
         k = k + 1;
      }
      i = i + 1;
   }
   tak=clock();
   t1=((float)(tak-tik)/CLOCKS_PER_SEC);
   printf("float - %f [%f]\n",t1,x);
   
   return 0;
}
