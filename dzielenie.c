#include <stdio.h>

int main(int argc,char **argv)
{
   int n = 1000,a;

   if(argc > 1 ) n = atoi(*(argv+1));

   while(n>0)
   {
      
      a = n / 13;
      n = n -1;
   }
   return 0;
}
