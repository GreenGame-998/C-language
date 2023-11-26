#include<stdio.h>

int sum();

int main(){
    int a,b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    int s=sum(a,b);
 printf("the sum is %d ",s);

  return 0;   
}

int sum(int x, int y){
    return x+y;
}
