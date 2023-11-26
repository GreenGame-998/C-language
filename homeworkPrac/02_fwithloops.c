// write fibonacci series using only loops(0, 1, 1, 2, 3, 5, 8, 13, ....)

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    
    int a=0;
    int b=1;



for(int i=1; i<=n;i++){
    if(i==1)
    printf("%d, ",a);

if(i==2)
    printf("%d, ",b);

if(i>=3){
    int f =a+b;
    printf("%d, ",f);
    a=b;
    b=f;
}}
    
    return 0;
    
}