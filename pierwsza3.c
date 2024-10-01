#include <math.h>
#include <stdio.h>
int jest_pierwsza ( unsigned long long int n )
{
   int i =3;
   if( n>2 && n%2 == 0 ) return 0;
   while ( i< sqrt(n) )
   {
      if ( n % i == 0 ) return 0 ;
      i = i + 2;
   }
   return 1 ;
}

int main()
{
   unsigned long long int n;

   printf("n = "); scanf("%llu",&n);
   printf("%llu\n",n);
   if(jest_pierwsza(n)) printf("Liczba %llu jest pierwsza\n",n);
   else printf("Liczba %llu nie jest pierwsza\n",n);

   return 0;
}
