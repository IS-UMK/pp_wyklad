/*  Algorytm Euklidesa z odejmowaniem. */

#include <stdio.h>

int main()
{
   int a, b, i;

   printf("Podaj dwie liczby calkowite: ");
   scanf("%d %d", &a, &b);

   printf("krok       a       b   \n%5d %7d %7d\n",0,a,b);
   
   i=0;
   while (a != b)
   {
      if (a > b) a = a - b;
      else       b = b - a;
      i = i + 1;
      printf("%5d %7d %7d\n",i,a,b);
   }
   
   printf("NWD = %d, krokow = %d\n", a,i);

   return 0;
}
