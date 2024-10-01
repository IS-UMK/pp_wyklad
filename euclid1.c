/*  Algorytm Euklidesa. */

#include <stdio.h>

int main()
{
   int a, b;

   printf("Podaj dwie liczby calkowite: ");
   scanf("%d %d", &a, &b);

   while (a != b)
      if (a > b) a = a - b;
      else       b = b - a;

   printf("NWD = %d\n", a);

   return 0;
}
