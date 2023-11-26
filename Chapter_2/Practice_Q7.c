/*Valid or invalid?
a. int a =8^8
b. int x; int y=x;
c. int x,y = x;
d. char stars= '**'
*/

#include <stdio.h>
int main(){
    int a = 8^8;         //valid
    printf("%d\n",a);

    int x; int y=x;      //valid

    int x,y=x;           //invalid


    char stars= '**';    // invalid -- because it takes two much data for a character and when the compiler tries two interchange it into double or float it can't do cuz it is not an int.

    return 0;

    }
