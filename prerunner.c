#include<stdio.h>
int main(){
    char User[100];
    scanf("%c",&User);
    printf("Hello, World!\n");
    for(int i=0; User[i]!='\0';i++){
    printf("%c",User[i]);
    }
    return 0;
}