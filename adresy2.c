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
    int *wa;
    int *wb;

    wa = &a;
    wb = &b;

    wb = wa;
   
   return 0;
}
