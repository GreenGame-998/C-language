//Print the factorial of a number
#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n>=0){
    int fact=1;
    

   for(int i=1;i<=n;i++){           //here for inp 0, the condition donot meet so factorial calculation is skipped and the given value of fact,i.e,come as an output.
    fact=fact*i;

   }

    printf("%d\n",fact);  }
    else{
        printf("enter valid number!");
    }
    return 0;  
    }

