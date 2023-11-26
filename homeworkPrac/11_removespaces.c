// write a program to remove blank spaces into the strings.

#include<stdio.h>
void removespaces(char arr[]);

int main(){
    char sent[]="Hi I'm Rajdev Singh";
    removespaces(sent);
    return 0;
}

void removespaces(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=' '){
            printf("%c",arr[i]);
        }
       
    }
    
}