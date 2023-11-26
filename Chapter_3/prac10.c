/*
write a program to give a grades to a student
marks <30 is C
30<=marks<70 is B
70<=marks<90 is A
90<=marks<=100 is A+
*/

#include<stdio.h>
int main(){
    int m;
    printf("Write down your marks:\n");
    scanf("%d",&m);
    if(m<30){
        printf("C");
    }
    
    else if(30<=m && m<70){
        printf("B");
    }
    else if(70<=m && m<90){
        printf("A");
    }
    else if(90<=m && m<=100){
        printf("A+");
    }
    else{
        printf("Enter the valid Number!");
    }

}