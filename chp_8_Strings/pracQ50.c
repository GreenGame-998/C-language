// Take a string input from the user using %c.

#include<stdio.h>
int main(){
    char name[100];
    char ch;
    int i;
    printf("enter the world\n");

    for(i=0; ch!='\n';i++){
        scanf("%c", &ch);
        name[i]= ch;
    }
    name[i]= '\0';      // %c me null char automatic nhi dalta vo %s me hota hai
    puts(name);
}