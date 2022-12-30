#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
int main(void){
    string s= get_string("s:\n");
    char *t=malloc(strlen(s)+1);
    strcpy(t,s);
    t[0]=toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);// only t capitalized
    }