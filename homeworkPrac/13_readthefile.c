// Write a program to read a string from a file & output to the user.

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("p.txt", "r");
    char ch;
    while(ch!=EOF){
        ch = fgetc(fptr);
        printf("%c",ch);
    }


    fclose(fptr);
    return 0 ;
}