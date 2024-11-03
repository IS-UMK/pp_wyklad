/*
 * kompilacja z opcja wlaczajaca instrumentacje 
   gcc -pg -o gprof-ex gprof.c

   uruchom program, powinien wytworzyc plik gmon.out z danymi wynikowymi
   ./gprof-ex

   utworzenie raportu 
   gprof ./grpot-ex gmon.out > analiza.txt

 *
 *
 */

#include <stdio.h>

void func1() {
    for (int i = 0; i < 1000000; i++);
}

void func2() {
    for (int i = 0; i < 2000000; i++);
}

int main() {
    func1();
    func2();
    return 0;
}
