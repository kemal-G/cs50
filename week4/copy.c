#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
int main(void){
    string s= get_string("s:\n");
    string t =s;// pointers are the same, thus both get capitalized
    t[0]=toupper(t[0]);
    printf("%s\n",t);
    printf("%s\n",s);///this var gets capitalized
    printf("%p\n",*&t);//pointers are the same,
    printf("%p\n",*&s);
    ///////
    //////
    strcpy(t,s);


    for( int i=0, n=strlen(s)+1; i<n;i++){

    }





}