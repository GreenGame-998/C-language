//write a program to store the first n fibonacci numbers.

#include<stdio.h>
int fib(int n);

int main(){
    int n;
    printf("Enter the numbers of terms: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
     arr[i]= fib(i);
    }

    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int f = fib(n-1)+fib(n-2);
    return f;
}