// Write a program to allocate memory of size n, where n is entered by the user.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Entered the no. of the locaation !\n");
    scanf("%d",&n);
    int *ptr;
    ptr = calloc(n,sizeof(int));

    

    for(int i = 0; i<n; i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}