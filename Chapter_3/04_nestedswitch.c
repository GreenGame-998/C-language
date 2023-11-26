#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num>=0){
        printf("number is positive\n");
        if(num%2==0){
            printf("number is even\n");

        }else{
            printf("number is odd\n");
        }
    }else{
        printf("number is negative");

    }
    return 0;
}