//keep taking input until user enters odd number.
#include<stdio.h>
int main(){
    
    for(int n;;){
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%2!=0){
        printf("you lose");
        break;
    } 
    }
    return 0;
}