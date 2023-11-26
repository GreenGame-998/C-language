// write a program to allocate memory to store 5 prices(float).

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;

    ptr = malloc(5*sizeof(float));

    ptr[0] = 34.75;
    ptr[1] = 56.78;
    ptr[2] = 46,24;
    ptr[3] = 64.6;
    ptr[4] = 56.8;

    for(int i=0; i<5; i++){
        printf("%f\n",ptr[i]);
    }
    return 0 ;
}

