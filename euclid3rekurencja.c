/*  Algorytm Euklidesa z operacja modulo.
 *  Wersja rekurencyjna. */

#include <stdio.h>

int nwd(int a, int b)
{
   if (b == 0) return  a;
   return nwd(b, a % b );
}


int main()
{
   int a, b, c;

   printf("Podaj dwie liczby calkowite: ");
   scanf("%d %d", &a, &b);
   printf("NWD(%d,%d) = ", a, b);

   c = nwd(a,b);

   printf("%d\n", c);

   return 0;
}
