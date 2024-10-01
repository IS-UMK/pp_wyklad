int jest_pierwsza ( int n )
{
   int i =2;
   while ( i<=n/i )
   {
      if ( n % i == 0 ) return 0 ;
      i = i + 1;
   }
   return 1 ;
}
