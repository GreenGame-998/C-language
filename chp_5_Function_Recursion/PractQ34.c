// Write a function to print n terms of the Fibonacci sequence.
// 0, 1, 1, 2, 3, 5, 8........ sum of the preceding 2 terms

#include<stdio.h>
int fibonacci(int n);

int main(){
    int n;
    printf("Enter the number:")
    ;scanf("%d",&n)
    ;printf("Fib of %d is %d",n,fibonacci(n));
    return 0 ;

}

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    int b = fibonacci(n-1)+fibonacci(n-2);
    
    return b;
}
