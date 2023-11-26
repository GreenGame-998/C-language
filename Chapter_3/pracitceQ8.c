//write a program to check whether the student is pass or fail(passing marks is 31)
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:\n");
    scanf("%d",& marks);
    if(marks>30){
        printf("Congrats you are pass:)");
    }else if (marks>0 && marks<=30){
        printf("Sorry you are failed!, Better luck next time:(");
    } else{
        printf("Please enter valid number!");
    }

    // marks>30? printf("PASS"): printf("FAIL");
    return 0;

}
