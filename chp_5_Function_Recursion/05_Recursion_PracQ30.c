// Recursion:--- when a function calls itself, it,s called recursion
// e.g write a program to cal. the sum of the first n natural number
// we use recursion where we can able to express a function in its own term,like sum(n)=sum(n-1)+n

#include<stdio.h>
int sum();

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    printf("The sum is %d",sum(n));
    return 0;

}

int sum(int n){
    if(n==1){
        return 1 ;
    }
   
    int sumNm1= sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}