/*
 * =====================================================================================
 *
 *       Filename:  printf.c
 *
 *    Description:  Program demonstrujacy rozne przypadki uzycia funkcji printf i scanf.
 *
 *        Version:  1.0
 *        Created:  23.10.2013 23:15:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Marek Grochowski (2013), 
 *   Organization:  KIS
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
   char c;
   float x, y;
   int i, j;

   printf("char c;\nint i, j;\nfloat x,y;\n\n");
   
   printf("scanf(\"%%d\",&i);                      << ");
   scanf("%d",&i);
   printf("printf(\"i=%%d j=%%d\\n\",i,j);           >> ");         /*  niezainicjowana  */
   printf("i=%d j=%d                     (j niezainicjowana)\n",i,j);         /*  niezainicjowana  */
   printf("printf(\"i=%%f\\n\",i);                  >> i=%f                  (blad formatu)\n",i);         /*  blad formatu  */
   
   printf("scanf(\"%%f\",&j);                      << ");
   scanf("%f",&j);
   printf("printf(\"j=%%d j=%%f\\n\",j,j);           >> "); 
   printf("j=%d j=%f     (j zle wczytana)\n",j,j);   
   
   printf("scanf(\"%%f%%f\",&x,&y);                 << ");
   scanf("%f%f",&x,&y);
   printf("printf(\"x=%%f y=%%f\\n\",x,y);           >> ");
   printf("x=%f y=%f\n",x,y);  
   printf("printf(\"x=%%d\\n\",x);                  >> x=%d                (blad formatu)\n",x);         /*  blad formatu  */
   

/*   printf("scanf(\"%%c\",&c);                     << ");
   scanf("%c",&c);
   printf("printf(\"%%c %%d %%x\\n\", c, c, c)        >> ");
   printf("%c %d %x\n", c, c, c);
*/
   printf("scanf(\" %%c\",&c);                     << ");
   scanf(" %c",&c);
   printf("printf(\"%%c %%d %%x\\n\", c, c, c)        >> ");
   printf("%c %d %x\n", c, c, c);
   
   printf("scanf(\"%%d\",i);                       << ");
   scanf("%f",i);

   return 0;
}
