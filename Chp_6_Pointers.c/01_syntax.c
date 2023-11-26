// Pointers are the variable that stores the memory address of another variable.

#include<stdio.h>

int main(){
    int age = 22;
    int *ptr= &age;     //stores the add of the age. '*' value at address, '&' address of age
    int _age= *ptr;     // value at add which is stored at ptr
    
printf("%u\n", &age);     
printf("%u\n", ptr);
printf("%u\n", &ptr); 
    return 0;

}
/*
Declaring pointers 
int *ptr;       like int age =22;
char *ptr;      like char star='*';
float *ptr;     like float price= 100.00;
*/

/*
Format specifier
printf("%p", &age);     can use %u instead of %p for simplification
printf("%p", ptr);
printf("%p", &ptr);
*/