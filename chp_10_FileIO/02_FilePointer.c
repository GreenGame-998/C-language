/*
File is a (hidden)structure that needs to be created for opening a file 
A FILE ptr that points to this structure & is used to access the file.

FILE *fptr;  (syntax)

# Opening a File
FILE *fptr;
fptr = fopen("filename", mode);         --- mode can be of read,write,etc.

#Closing a File
fclose(fptr);

*/

#include<stdio.h>

int main(){
    FILE *fptr;
    // fptr= fopen("Newtext.txt","r");
    fptr= fopen("Newtext.txt","w"); // will create the non-existing file
    if(fptr==NULL){
        printf("File doesn't exist\n");}
    else{
        fclose(fptr);
    }
    
 

    return 0;
}

/*
"r"     open to read            ||  will store null value if the while
"rb"    open to read in bianry  ||  doesn't exist

"w"     open to write           ||  will create file if it's not created yet 
"wb"    open to write in binary ||  but if file is there then it will overwrite the data

"a"     open to append          || we use this if we donot want to overwrite the store data and add something on it
*/