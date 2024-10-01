/*  Algorytm Euklidesa z operacja modulo. */

#include <stdio.h>

int main()
{
   int a, b, c, i;

   printf("Podaj dwie liczby calkowite: ");
   scanf("%d %d", &a, &b);

   printf("krok       a       b   \n%5d %7d %7d\n",0,a,b);
   
   i=0;
   while (b != 0)
   {
      c = a % b;
      a = b;
      b = c;
      i = i + 1;
      printf("%5d %7d %7d\n",i,a,b);
   }
   
   printf("NWD = %d, krokow=%d\n", a,i);

   return 0;
}
