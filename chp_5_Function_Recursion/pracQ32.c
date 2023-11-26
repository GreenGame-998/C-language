//convert celsius to fahrenheit.

#include<stdio.h>

float far(float n);

int main(){
    float celsius= 37;
    printf("%f",far(celsius));
    return 0;
}

float far(float n){
    float f= n*(9.0/5.0)+32;
    return f;
}