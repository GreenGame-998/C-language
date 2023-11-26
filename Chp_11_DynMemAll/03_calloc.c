/*
calloc()
continous allocation
intializes with 0 
ptr = (*int)calloc(5,sizeof(int));          -- 5 indiactes here no. of the locations we need and size gives the idea of the size per loc.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = calloc(5, sizeof(int));
    

    // ptr[0]=34;
    // ptr[1]=36;
    // ptr[2]=37;
    // ptr[3]=32;
    // ptr[4]=31;

for(int i=0; i<5; i++){
    printf("%d\n",ptr[i]);
    }
return 0;
}