// sum of no. from 5 to 50(including)

#include<stdio.h>
int main(){

    
   
    int sum=0;
 
    for(int j=50;j>=5;j--){
        sum+=j;
        // printf("%d\n",j);
    }
    printf("sum is %d\n",sum);

    return 0;
}