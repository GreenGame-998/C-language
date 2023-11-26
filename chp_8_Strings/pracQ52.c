//SLICE--Write a function named slice, which takes a string & returns a sliced string from index n to m.
#include<stdio.h>
#include<string.h>
void slice(char password[], int n, int m);

int main(){
  char name[]= "jaiSiyaRam";
    slice(name,3,8);
return 0;

}
void slice(char password[], int n, int m){
    char newpass[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newpass[j]=password[i];   // not--- password[i] = newpass[j]
    }
    newpass[j]='\0';
    puts(newpass);
}