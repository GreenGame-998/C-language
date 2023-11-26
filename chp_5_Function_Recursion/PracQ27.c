//write two function - one to print "Hello" & second to print "good bye".

#include<stdio.h>

void printH();
void printG();

int main(){
    printH();
    printG();
    printH();

    return 0;
}

void printH(){
    printf("Hello!\n");
}
void printG(){
    printf("GoodBye!\n");
}