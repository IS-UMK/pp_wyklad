program NWD(input,output);
{ Algorytm Euklidesa. }
var
   A, B : Integer;
begin
   Writeln('Podaj dwie liczby calkowite: ');
   Readln(a,b);

   while a <> b do
   begin
      if a > b then a := a - b
      else b := b - a;
   end;
   Writeln('NWD = ', a);
end.

