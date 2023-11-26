// Write a program which convert lowercases into uppercases and vice-versa.

#include<stdio.h>

void Convert(char arr[]);

int main(){
char senetence[]= "My dear FRieNdS WheRE Are YoU";
Convert(senetence);
    
    return 0;
}

void Convert(char arr[]){
    for(int i= 0; arr[i]!='\0';i++){

        if(arr[i]==' '){
            printf("%c",arr[i]);
        }
        
        if(arr[i]>='a' && arr[i]<='z'){
        printf("%c",arr[i]-'a'+'A');
        }
        
        if(arr[i]>='A' && arr[i]<='Z'){
            printf("%c",arr[i]- 'A' + 'a');
        }
    }
}
    
