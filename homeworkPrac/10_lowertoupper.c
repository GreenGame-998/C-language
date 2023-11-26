// Write a program which convert all lowercases vowels into uppercase in a strings.

#include <stdio.h>
void Capitalize(char arr[]);

int main(){
    char vowels[]="education";
    Capitalize(vowels);

    return 0;
}

void Capitalize(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]=='a'){
            arr[i]= 'A';
        }
        if(arr[i]=='e'){
            arr[i]= 'E';
        }
        if(arr[i]=='i'){
            arr[i]= 'I';
        }
        if(arr[i]=='o'){
            arr[i]= 'O';
        }
        if(arr[i]=='u'){
            arr[i]= 'U';
        }
    }
    puts(arr);
}