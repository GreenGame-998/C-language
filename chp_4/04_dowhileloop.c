/*dowhile loop
syn:
int i=0;
do{
    do something
    i++;
}while(condition);
it will run the code the first then check the condition
*/

#include<stdio.h>
int main(){
    int i =0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
    return 0;
    
    
}