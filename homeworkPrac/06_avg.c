#include<stdio.h>
int fib(int n);


int main(){
    int n;
    float sum_f=0;
   
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        sum_f=sum_f+fib(i);
    }
    float avg= sum_f/n;
    printf("%f\n",sum_f);
    printf("Avg. is %f",avg);
       return 0;
    
}


int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int f = fib(n-1) + fib(n-2);
    return f;
}