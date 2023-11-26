/* Arrays as Function Argument

Function Declaration
void printNumber (int arr[], int n)  OR
void printNumber (int *arr, int n)

Function call
printNumbers(arr,n);
*/

#include<stdio.h>

void printNumbers(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5,6};
    printNumbers(arr, 6);           // can replace arr[] by *arr
return 0;
}

void printNumbers(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    
}