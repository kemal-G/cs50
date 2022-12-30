#include <stdio.h>
#include<cs50.h>

int main(void){
    int n=50;
    int *p= &n;
    printf("%p\n", &n);
    printf("%i\n", *p);
    char *s ="asd";// s harfi pointer ile birlikte depolanır. s bir pointerdır.
    printf("%s\n", s);
    char *po= &s[0];
    printf("%p\n", po);//
    printf("%p\n", s);//pointer of first char +1
    //typedef char *str;//define string type as multiple chars
    printf("%c\n", *s);
    printf("%c\n", *s+1);// ascii code +1
    printf("%c\n", *(s+1));//pointer +1
}
