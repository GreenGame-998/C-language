#include<stdio.h>

void table(int n);

int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    table(n);               // argument/actual parameter

    return 0;
}


void table(int n){          // parameter/formal parameter
   for(int i=1; i<=10;i++){
    printf("%d\n",n*i);
   }}

//changes to parameters in function don't change the value in calling function. Happens beacause a copy of arguments is passed to the function