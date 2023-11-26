//Area of the circle

#include <stdio.h>
int main(){
    float rad;
    printf("Enter the radius:");
    scanf("%f",&rad);
    float area = rad*rad*3.14;
    printf("The area of the circle is,%f",area);
    return 0;
}