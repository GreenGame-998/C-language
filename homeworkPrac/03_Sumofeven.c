// Write a C program to calculate the sum of the even-valued terms in the Fibonacci series up to a given limit 'n' using a loop.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    
    int a=0;
    int b=1;
    int sum=0;
    if(n<=2)
    printf("sum is zero");


for(int i=3; i<=n;i++){
    int f =a+b;
    a=b;
    b=f;
    
    if(f%2==0){
        sum=sum+f;
    }
}
  printf("%d",sum);  
    return 0;
    
}