/*
Salting:
Find the salted form of a password entered by user if the salt is "123" & added at the end.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char password[100];
    printf("Enter the password:\t");
    gets(password);
    char salt[]= "123";
    strcat(password,salt);
    puts(password);
    return 0;
}