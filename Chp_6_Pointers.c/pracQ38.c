//Swap 2 numbers a & b into the main function.
#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x=3,  y=5;
    // swap(x,y);
    // printf("x = %d, y = %d\n", x,y);  // do not swap into the main function

    _swap(&x,&y);
    printf("x = %d, y = %d\n", x,y);
}
// Call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;

    printf("a = %d, b = %d\n", a,b);
}

// Call by reference                   --we use call by ref. when want multiple values in return.
void _swap(int *a, int *b){
    int t= *a;
    *a= *b;
    *b=t;
}