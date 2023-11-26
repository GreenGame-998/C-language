// Create a structure to store vectors. Then make a function to return sum of 2 vectors.

// Enter address (house no, block, city, state) of 5 people.

#include<stdio.h>
#include<string.h>
 
struct vectors{
    int x;
    int y;
};
void calsum(struct vectors v1, struct vectors v2, struct vectors sum);

int main(){
    struct vectors v1 = {3,7};

    struct vectors v2 = {7,9};
    struct vectors sum = {0};
    calsum(v1, v2, sum);
return 0;
}

void calsum(struct vectors v1, struct vectors v2, struct vectors sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("Sum of x is %d\n", sum.x);
    printf("sum of y is %d",sum.y);
}


