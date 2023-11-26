// Write a program to print all the odd numbers upto n number.

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Odd.txt","w");

    int n;
    printf("enter the last term:");
    scanf("%d", &n);

    for(int i=0; i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
    return 0;
}