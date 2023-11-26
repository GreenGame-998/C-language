/*
Pointers in Function call
-Call by value(duplicate hoke jata)  -Call by Reference(original).
We pass value of variable               We pass addressed of vairable as
as argument                                 argument.
*/

#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
int num = 5;
square(num);
printf("number = %d\n",num);

_square(&num);
printf("number = %d\n",num);

}

void square(int n){
n = n*n;
printf("square= %d\n",n);
}
void _square(int *n){
*n = (*n)*(*n);
printf("square = %d\n",*n);
}
