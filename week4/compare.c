#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
    char *bir= get_string("asd:");
    char *iki= get_string("dsa:");
    printf("%p\n", bir);//adresses slightly different
    printf("%p\n", iki);
    if(strcmp(bir,iki)==0){printf("strcmp same\n");}
    else{printf("strcmp diff\n");}
    if(*bir==*iki){//without *, it compares pointers and returns diff every time
        printf("Same\n");
    }
    else{printf("Diff\n");}
}