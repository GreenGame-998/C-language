//Solve int a = 1.999999;

#include<stdio.h>
int main(){
    // int a = 1.999999;
    // printf("%d", a); 

    int a = (int)1.999999;
    printf("%d\n",a);

    
                                  // compiler can easily convert big data types into small ones automatically,e.g, int into float and into doubles 
 // but we have to give specific instructions for wise versa.
    return 0;

}