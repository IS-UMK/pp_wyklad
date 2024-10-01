#include<stdio.h>
#include<string.h>


void strlen_test()
{
    char *str = "Ala ma kota";
    int n = strlen(str);
    printf("Napis \"%s\" ma %d znakow.\n", str, n);
}

void strcat_test()
{
    char str1[100] = "Siala baba mak";
    char str2[] = " nie wiedziala jak\n";
    strcat(str1, str2);
    printf(str1);
}

void strcmp_test()
{
    char *str1 = "abc";
    char *str2 = "abd";

    if(strcmp(str1, str2) == 0) printf("Napisy sa takie same\n");
    if(strcmp(str1, str2) > 0) printf("Napis \"%s\" < \"%s\"\n", str1, str2);
    

}

int main()
{
    strlen_test();
    strcat_test();
    strcmp_test();

}