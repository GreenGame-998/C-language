#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'){                                      //ch>='A' or ch>=65 are both same, 65 is the asteric value of A
        printf("Charater entered is Uppercase\n");
    }
    else if(ch>='a'&& ch<='z'){
        printf("Charater entered is lower case\n");
    }
    else{
        printf("ERORR! Not an english world");
    }
    return 0;
}