// Write a program to enter price of 3 items & print their final cost with gst(18%).

#include<stdio.h>
int main(){
    float price[3];
    printf("enter the prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Final price 1: %f\nFinal price 2: %f\nFinal price 3: %f\n",1.18*price[0], 1.18*price[1],1.18*price[2]);

    return 0;
}