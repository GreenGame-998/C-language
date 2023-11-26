// A variable that stores the memory address of another pointer.

/*
Syntax:

int **pptr;
char **pptr;
float **pptr;
*/
// e.g. Print he value of 'i' from its pointer to pointer(int i =5).
#include<stdio.h>
int main(){
    int i = 5;
    int *ptr =&i;
    int **pptr= &ptr;

    printf("%d", **pptr);
}
