/*
String Format Specifier: "%s"
*/ 

#include<stdio.h>
int main(){
    char name[]= "Shradha";
    printf("%s\n", name);
    char surname[78];
    printf("Enter her surname: ");
    scanf("%s",surname);            // surname instead of &surname because string is char array, which ultimately is a pointer, points towards the add.

    printf("%s %s", name,surname);

    return 0;
}

