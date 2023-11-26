//write a function that prints Namaste if user is Indian & Bonjour if the user is French.

#include<stdio.h>

void printN();
void printB();

int main(){
    char c;
    printf("Enter your nationality:\n");
    
    scanf("%c",& c);

    if(c=='i'){
        printN();
    }
    else if(c=='f'){
        printB();
    }
    else{
        printf("Enter either i or f\n");
    }
    return 0;
}

void printN(){
    printf("Namaste!\n");

}
void printB(){
    printf("Bonjour!\n");
}