//Array is a pointer------point towards zeroth location of array
// int *ptr = &arr[0];
// int *ptr = arr[];            --these both are same

// Traverse an Array

#include<stdio.h>
int main(){
    int aadhar[5];
    
    // input
    int *ptr =&aadhar[0];
    for(int i=0;i<5; i++){
        printf("%d index: ", i);
        scanf("%d", (ptr+i));               //replace ptr+i with &aadhar[0]

    }

    //output
    for(int i=0; i<5; i++){
        printf("%d index = %d\n0",i, *(ptr+i));         // replace *(ptr+i) with aadhar[0]
    }
}