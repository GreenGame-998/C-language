//Factorial of n.
#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Factotrial is, %d", fact(n));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }

    int sf= fact(n-1);
    int fact = sf*n;
    return fact;
}