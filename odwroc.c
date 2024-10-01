/* Program wczytuje sekwencje liczb calkowitych az do podania wartosci 0.
 * Nastepnie wyswietlana jest ta sama sekwencja ale w odwrotnej kolejnosci.
 */

#include<stdio.h>

int main()
{
   int tab[100];
   int i = 0;
   int a = -1; 

   printf("Podaj sekwencje liczb calkowitych.\n");
   printf("Aby zakonczyc podaj 0.\n");

   while( a != 0 && i < 100)
   {
      scanf("%d", &a);
      tab[i] = a;
      i = i + 1;
   }
   
   printf("Podales %d liczb.\n", i);

   while(i > 0)
   {
      i = i - 1;
      printf("%d\n", tab[i]);
   }

   return 0;
}
