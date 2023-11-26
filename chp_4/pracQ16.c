//print the no. of table given by the user
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The table is as follows:\n");
    for(int i=1;i<=10;i++){

        printf("%d\n",n*i);
    }
    return 0;
}