#include <stdio.h>

void strcpy2(const char *a, char *b)
{
   while(*b++=*a++);
}


int main()
{
   char *s = "Ala ma kota";
   char t[1000];

   t[0] = '\0';

   puts(t);

   strcpy2(s, t);

   puts(t);

}
