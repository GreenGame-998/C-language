/* int arr[] = {1,2,3,4,5}
For the given array, what will the following give?
a. *(arr+2)
b. *(arr+5)
*/
#include<stdio.h>
int main(){
    int arr[]= {1,2,3,4,5};
    printf("value of a. is %d\n", *(arr+2));
    printf("value of b. is %d", *(arr+5));

    return 0;
}