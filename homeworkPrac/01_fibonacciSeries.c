#include<stdio.h>
int fib(int n);

int main(){
    int n;
    printf("Enter the no. of terms:\n");
    scanf("%d",&n);
    for(int i=1; i<=n-1; i++){
        printf("%d, ",fib(i));
       
    }
    printf("%d",fib(n));

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