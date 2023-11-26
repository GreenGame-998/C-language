/*
Strings Functions:
*gets(str)                   *puts(str)
input a string             output a string 
(even multiword)
but consider dangerous and 
even outdated

*/

#include<stdio.h>
int main(){
    char name[100];
    // gets(name);
    fgets(name,101,stdin);
    puts(name);

return 0;
}

/*
fgets(str,n,file)
stops when n-1 chars input or new line
is entered.

for now write stdin in place of file 
*/