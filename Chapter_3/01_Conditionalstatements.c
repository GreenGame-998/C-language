#include<stdio.h>
int main(){
    int age;
    printf("Write your age:");
    scanf("%d",&age);

    if(age> 18){
        printf("adult\n");
    }
    if(age==100){
        printf("Century");
    }

    else if(age>13 && age<=18){
        printf("your a teenager\n");
    }
    else{
        printf("child\n");
        }
     

    return 0;

}
