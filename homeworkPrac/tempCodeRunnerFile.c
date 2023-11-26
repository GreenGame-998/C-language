#include<stdio.h>
int fib(int n);
int main(){
    int n;
    int i;
    int j;
    int d=-1;
    printf("Enter the term: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=j){
        d=++d;
        for(int k=0; k<n-i;k++){
            printf(" ");
        }


        for(j=i; j<=i+d;j++){
            printf("%d ",fib(j));
            
            
        }
        printf("\n");
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