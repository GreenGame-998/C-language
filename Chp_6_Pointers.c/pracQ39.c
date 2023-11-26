//Will the address output be same?

#include<stdio.h>

// Call by value

// void printaddress(int n);


// int main(){
//     int n=5;
//     printaddress(n);
//     printf("Add is %u\n", &n);
   
    

//     return 0;
// }

// void printaddress(int n){
//     printf("Add is %u\n", &n);
// }


//Call by reference
void printaddress(int *n);


int main(){
    int n=5;
    printaddress(&n);
    printf("Add is %u\n", &n);
   
    

    return 0;
}

void printaddress(int *n){
    printf("Add is %u\n",n);
}