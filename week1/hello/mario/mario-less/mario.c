#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do{
        n=get_int("Height: ");
    }
    while (n<1||n>8);
    for (int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            printf(" ");}
        for(int t=0;t<=i;t++){
            printf("#");}
        printf("\n");
    }
}