/*  Funkcja nwd() - algorytm Euklidesa z operacja modulo. 
 *  Maly balagan - bez wciec */


#include <stdio.h>
int nwd(int a,int b){int c; 
while(b!=0){c=a%b;a=b;b=c;}
return a;} int main(){ 
int a,b; printf("Podaj dwie li"
"czby calkowite: "); scanf("%d %d", 
&a,&b); printf("NWD(%d,%d) = %d\n", 
a,b,nwd(a,b));return 0;}
