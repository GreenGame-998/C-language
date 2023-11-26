/*
# Writing to a File
char ch='A';
fpritnf(fptr, "%c",ch);

# Read & Write a Char
fgetc(fptr);        for read from the file
fputc('A',fptr)     for write in the file

#
*/

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt","w");
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    fclose(fptr);

    fptr = fopen("text.txt","a");
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    fclose(fptr);

    FILE *fptr;
    fptr = fopen("text.txt","r");

    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));

    fclose(fptr);
    FILE *fptr;
    fptr = fopen("text.txt","w");

    fputc('R',fptr);
    fputc('A',fptr);
    fputc('M',fptr);
    fputc(' ',fptr);
    fputc('R',fptr);
    fputc('A',fptr);
    fputc('M',fptr);

    fclose(fptr);

     FILE *fptr;
    fptr = fopen("text.txt","a");
    fputc(' ',fptr);
    fputc('B',fptr);
    fputc('H',fptr);
    fputc('A',fptr);
    fputc('I',fptr);
    fputc('Y',fptr);
    fputc('0',fptr);
    

    fclose(fptr);
    return 0;

}

