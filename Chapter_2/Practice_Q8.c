/*
a. if it's sunday & it's snowing--true 
b. if it's monday & it's raining--true 
c. if a number is greater than 9 & less than 100--true 
*/


#include<stdio.h>
int main(){
    int issunday=1;
    int issnowing=1;
    printf("%d\n",issnowing && issunday);
    
    int ismonday=1;
    int israining=1;
    printf("%d\n",israining && ismonday);


    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d\n",a>9 && a<100);



    return 0;

}