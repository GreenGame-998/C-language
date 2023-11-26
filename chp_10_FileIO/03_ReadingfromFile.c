/*
Reading from a file

char ch;
fscanf(fptr, "%c", &ch);  ---file pointer, file specifer, Add of varible.

*/

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");

    int ch;
    fscanf(fptr,"%d",&ch);
    printf("character = %d\n", ch);

    fscanf(fptr,"%d",&ch);
    printf("character = %d\n", ch);
 

    fscanf(fptr,"%d",&ch);
    printf("character = %d\n", ch);

    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n", ch);

    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n", ch);

    fclose(fptr);
    return 0;
}