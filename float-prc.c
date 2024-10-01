#include <stdio.h>

int main()
{
   float a=10.0;
   int i=1;
   while(i<30)
   {
      a = a + 0.1;
      printf("%f\n",a);
      i = i + 1;
   }
   return 0;
}
