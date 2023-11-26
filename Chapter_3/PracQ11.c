#include<stdio.h>
int main(){
    int x=2;
    if(x=0){                                        //here the value of x(which is given 2) is being replaced by 1
        printf("x is equal to 1\n");                //x for any value other than 0 is true so if statement runs
    }                                               // for x equal to zero,it is regarded as false to the system so else statements runs
    else{
        printf("x is not equal to 1\n");
    }
    printf("%d",x);
    return 0;
}