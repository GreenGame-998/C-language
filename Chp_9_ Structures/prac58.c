// Create a structure to store complex numbers ( using arrow operator).

#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex num ={8,9};
     struct complex *ptr = &num;
    

    printf("The complex number is %d i + %d j", ptr->real, ptr->img);
}