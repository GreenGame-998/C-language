/*
a. 5*2-2*3 = 4
b. 5*2/2*3 = 15
c. 5*(2/2)*3 = 15
d. 5+2/2*3 = 8
*/

#include<stdio.h>
#include<math.h>
int main(){
    int a= 5*2-2*3;
    printf("%d \n",a);
    
    int b = 5*2/2*3;
    printf("%d\n",b);

    int c= 5*(2/2)*3;               //solve bracket first
    printf("%d\n",c);

    int d = 5+2/2*3;
    printf("%d\n",d);
    return 0;
}