/*
free()
We use it to free memory that is allocated using malloc & calloc

free(ptr);
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Entered the no. of the locaation !\n");
    scanf("%d",&n);
    int *ptr;
    ptr = calloc(n,sizeof(int));

    

    for(int i = 0; i<n; i++){
        printf("%d\n",ptr[i]);
    }

free(ptr);
ptr = calloc(2,sizeof(int));

  for(int i = 0; i<2; i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}
