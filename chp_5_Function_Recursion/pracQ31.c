//Write a function to program to calculate area of square, circle and rectangle.

#include<stdio.h>
#include<math.h>

void sq(float s);
void cir(float c);
void rect(float a, float b);

int main(){
    float s,c,a,b;
    // printf("Enter the side of the square: ");
    // scanf("%f", &s);
    // sq(s);
    // printf("Enter the radius of the circle: ");
    // scanf("%f",&c);
    // // cir(c);
    printf("Enter the length of the rectangle: ");
    scanf("%f", a );
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", b );
    rect(a,b);



return 0;
}

void sq(float s){
    printf(" area of square, %f\n",s*s);
}
 void cir(float c){
    printf("Area of the circle, %f\n", 3.14*c*c);
 }
 void rect(float a, float b){
    printf("area of the rectangle is %f\n", a*b);
 }