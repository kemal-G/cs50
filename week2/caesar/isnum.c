#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>





int isInt(string n){
    for(int i=0;i<strlen(n);i++){
        if((int)n[i]>=47&&(int)n[i]<=57){return true;}}
    return false;
}
int main(){
    if(isInt("50000")){printf("hola\n");}
}