/*
Strings:
A character array terminated by a '\0' (null character)
null character denotes string termination

Ex:  
char name []= {'s','h', 'g', 'a', '\0'};

Intialising Strings
char name[]= {'s','h', 'r', 'a', 'd', 'h', 'a', '\0'};
char name[]= "shradha";
                                both are same
char class[]= {'A', 'P', 'N', 'A', '', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};
char class[]= "APNA COLLEGE";
*/

#include<stdio.h>
int main(){
    char name[] = {'s','h', 'r', 'a', 'd', 'h', 'a', '\0'};  // like array
    // char _name[]= "shradha";

    for(int i=0;name[i]!='\0';i++){
printf("%c", name[i]);

    }
    
    return 0;
}