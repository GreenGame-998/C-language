// Write a function which inputs user name and print it back along with its length.

#include<stdio.h>
int printlength(char arr[]);
int main(){
    char name[100];
    fgets(name,101,stdin);
    puts(name);

    printf("%d",printlength(name));
    
}

int printlength(char arr[]){
    int count = -1;     // cuz it will also count \0
    for(int i = 0; arr[i]!=0; i++){
        count++;
    }
    return count;
}