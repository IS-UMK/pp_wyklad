/*  Algorytm Euklidesa z operacja modulo. */

#include <stdio.h>

int main()
{
   int a, b, c;

   printf("Podaj dwie liczby calkowite: ");
   scanf("%d %d", &a, &b);
   printf("NWD(%d,%d) = ", a, b);

   while (b != 0)
   {
      c = a % b;
      a = b;
      b = c;
   }
   printf("%d\n", a);

   return 0;
}
