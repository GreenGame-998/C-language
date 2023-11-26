/*  String using Pointers

char *str = "Hello World";

....store string in memory & the assigned address is stored in the char pointer 'str'

char *str = "Hello World";   --can be reinitialized
can modify......   str= "hello"
or      ......      str = "word"

char str[] = "Hello World";     --cannot be reinitialized

*/

#include<stdio.h>
int main(){
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotchange[]= "Hello World";
    puts(cannotchange);
    // cannotchange = "Hello change"     -- arrays cannot modified
    puts(cannotchange);
}