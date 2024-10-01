/*
 * =====================================================================================
 *
 *       Filename:  adresy2.c
 *    Description:  Program demonstujący uzycie wskaźników.
 *        Created:  18.12.2023 
 *
 * =====================================================================================
 */

int main()
{
    int a = 10;
    int b = 13; 
    int *wa = &a;
    int *wb = &b;

    *wb = 5;

    *wa = *wb;

    wb = wa;
    *wb = *wb + 1;
   
   return 0;
}
