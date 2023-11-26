//Write a function to reverse an array

#include<stdio.h>
int main(){
    int arr[]= {1,2,3,4,5,6};
    for(int i=0;i<3;i++){
        int fv= arr[i];
        int sv = arr[6-i-1];

        arr[i]= sv;
        arr[6-i-1]=fv;
    }
for(int i=0; i<=6;i++){
    printf("%d\n", arr[i]);
}
return 0;
}