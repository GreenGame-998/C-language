/*Write a C program to print the Fibonacci series in a pyramid pattern using a loop and if-else statements. For example, if the input is 5, the output should be:

   0
  1 1
 2 3 5
8 13 21 34
55 89 144 233 377
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);

    int a=0,b=1;
    for(int i=0;i<n;i++){

        for(int k=0; k<n-i;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%d ",a);
            int term = a+b;
            a=b;
            b= term;
        }
        printf("\n");
    }
    return 0;
}