//Ask user their fullname and print it back to them.

#include<stdio.h>
int main(){
    char fullname[100];
    printf("Enter your full name: ");
    scanf("%s", fullname);      // scanf cannot input multi-word strings with spaces-----here we use gets() and puts()

    printf("Your fullname is %s", fullname);     
}