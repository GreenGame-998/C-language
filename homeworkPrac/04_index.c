#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;; i++){
        fib(i);
        if(fib(i)==n){
            printf("index is %d",i);
            break;}
        if(fib(i)>n){
            printf("Number isn't in the series");
            break;
        }
        
    }
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