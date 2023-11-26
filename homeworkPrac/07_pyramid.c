/*Write a C program to print the Fibonacci series in a pyramid pattern, here pyrmamid will be made out of the no. of terms(input !=rows).
   0
  1 1
 2 3 5
8 13 21 34
55 89 144 233 377
*/

#include<stdio.h>
int fib(int n);

int main(){
    int n,i,j;
    int d=-1;
    printf("Enter the term: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=j){
        d=++d;

        for(int k=0; k<n-d;k++){
            printf(" ");
        }
        if(i+d<=n){
            for(j=i; j<=i+d;j++){
             printf("%d ",fib(j));
            }
            printf("\n");
        }
        else{
            for(j=i; j<=n;j++){
            printf("%d ",fib(j));
            }
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