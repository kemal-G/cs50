#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]){
    printf("%i\n",atoi(argv[1])%26);
}

    //printf("%i\n",atoi(argv[1]));}
/*:( encrypts "world, say hello!" as "iadxp, emk tqxxa!" using 12 as key
    output not valid ASCII text
:) handles lack of argv[1]
:( handles non-numeric key
    timed out while waiting for program to exit*/