#include<stdio.h>

int main()
{
   char a;
   
   printf("Podaj znak: "); 
   scanf("%c",&a);
   
   printf("znak %c, dec %d, oct %o, hex %x\n",a,a,a,a);
   return 0;
}
