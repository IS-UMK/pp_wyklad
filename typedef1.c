/*
 * =====================================================================================
 *
 *       Filename:  typedef1.c
 *    Description:  Demo typedef
 *
 * =====================================================================================
 */


typedef float liczba;
typedef float punkt[4];
typedef enum { false, true } bool; 
typedef float *wskaznik;

int main()
{
   liczba x = 3.14;
   punkt y;
   bool czy_koniec = false;
   wskaznik w = &x;
}
