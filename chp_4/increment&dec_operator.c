//Increment operators
//++i and i++

#include<stdio.h>
int main(){
    int i=1;
    printf("%d\n",i++);  //use, then increase
    printf("%d\n",i);

    printf("%d\n",++i);         //increase, then use
    printf("%d\n",i);

    return 0;
}
// same for decrement operators like i--, --i
// infinite loop are the loops without termination