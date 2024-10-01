#include<stdio.h>

typedef struct 
{
   unsigned int dzien   :  5 ;
   unsigned int miesiac :  4 ;
   unsigned int rok     : 11 ;
} data;

int main()
{
   data dzis = { 18, 16, 2022 };  
   
   printf("Data: %u-%u-%u\n", 
         dzis.dzien, dzis.miesiac, dzis.rok);

   printf("sizeof(data)=%ld\n", sizeof(data));
   
   return 0;
}
