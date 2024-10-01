      PROGRAM EUCLID1
c     Algorytm Euklidesa w jezyku Fortran 77
   
      WRITE (*,*) 'Podaj dwie liczby calkowite: '
      READ (*,*) N, M
   
      DO WHILE ( N .NE. M ) 
         IF ( N .GT. M ) THEN 
            N = N - M
         ELSE
            M = M - N
         ENDIF
      ENDDO
      WRITE (*,*) 'NWD=', N
      END
