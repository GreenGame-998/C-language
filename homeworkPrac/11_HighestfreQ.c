// write a program to print the highest frequency character in the string.

#include<stdio.h>

void HighFrequency(char arr[]);

int main(){
    char string[]= "aabbbccccdddddeeeeeee";
    HighFrequency(string);
    return 0;
}

void HighFrequency(char arr[]){
int a=0;
int b=0;
char c;
for(int i=0; arr[i]!='\0';i++){
    for(int j=i+1;arr[j]!='\0';j++){ 
        if(arr[i]==arr[j]){
        a+=1;
        if(a>b){
            b=a;
            c=i;
            a=0;

        }
        }
    }
    
    
}
printf("%c occurs %d times",arr[c], b);

 
}

