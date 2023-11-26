/*
EOF( End of file)
fgetc returns EOF to show that the file has ended
*/

# include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");

    char ch;
    // ch = fgetc(fptr);
    // for(int i= 0; ch!= EOF; i++){
    //     printf("%c",ch);
    //     ch=fgetc(fptr);
    // }

    while(ch!=EOF){
        ch = fgetc(fptr);
        printf("%c",ch);
       
    }

    fclose(fptr);
    return 0 ;
}