#include <stdio.h>


int main()
{
   int n, i=1;
   printf("n = "); 
   scanf("%d", &n);
   while(i<=n) 
   {
      if(jest_pierwsza(i) == 1) printf("%d\n",i);
      i++;
   }
   return 0;
}

