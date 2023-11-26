/*
realloc()
reallocate(increase or decrease ) memory using the same pointer & size.

ptr= realloc(ptr,newSize);
*/

// Q. Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = calloc(5,sizeof(int));

    printf("Enter the fove numbers(5): ");
    for(int i =0; i<5; i++){
        scanf("%d",&ptr[i]);
    }

    ptr = realloc(ptr,8);
    printf("Enter the no.(8):  ");
     for(int i =0; i<8; i++){
        scanf("%d",&ptr[i]);
    }

for(int i = 0; i<8; i++){
    printf("%d\n",ptr[i]);
}
return 0;    
}