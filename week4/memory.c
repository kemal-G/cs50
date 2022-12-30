#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *x= malloc(3* sizeof(int));//after done, free the memory. otherwise memory leak
    x[0]=77;
    x[1]=75;
     x[2]=72;
     free(x);
}