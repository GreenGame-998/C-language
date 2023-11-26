/*
<stdlib.h> ---  library for dma
malloc():  memory alloacation

takes number of bytes to be allocated & returns a pointer of type void

ptr = (*int)malloc(5* sizeof(int));         ---we use (*int) to convert the type from void to int
                                                but we declare ptr as  int *ptr then no need of this
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = malloc(5* sizeof(int));        // value of ptr become NULL when the sys isn't able to provide the demaned memory
    ptr[0] = 3;
    ptr[1] = 2;
    ptr[2] = 8;
    ptr[3] = 6;
    ptr[4] = 5;

    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;

}