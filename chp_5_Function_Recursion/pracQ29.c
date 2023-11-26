// Use the library functions to calculate the square of a number given by the user.

#include<stdio.h>
#include<math.h>

void square(int n);

int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    square(n);
    return 0;
}

void square(int n){
    printf("%f", pow(n,2));
}