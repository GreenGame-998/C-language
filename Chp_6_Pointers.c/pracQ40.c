// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
// here we have to return more than one value in the main func. so we use pointers
#include<stdio.h>

void dowork(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a=9, b=5, sum, prod, avg;
    dowork(a,b, &sum, &prod, &avg);
    printf("sum=%d\n",sum);
    printf("prod=%d\n",prod);
    printf("avg=%d\n",avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;


}