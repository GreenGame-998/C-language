/*
Collection of similar data types stored at contiguous
memory locations.

Syntax
int marks[3];           works on zero indexing
char name[10];
float price[2];         [x]-----x represents the no. of things we stored in the arrays.

Input & Output
scanf("%d",&marks[0]);
printf("%d",marks[0]);

*/

#include<stdio.h>

int main(){
    int marks1 = 95;
    int marks2 = 91;
    int marks3 = 98;

    int marks[] = {95, 91, 98};         //no need to write size there because we declare and inititalized at the same time.
    printf("%d",marks[2]);

    int marks[3];
    printf("Enter phy marks: \n");
    printf("Enter chem marks: \n");
    printf("Enter maths marks: \n");

    scanf("%d\n",&marks[0]);
    scanf("%d\n",&marks[1]);
    scanf("%d",&marks[2]);

    printf("Phy = %d,\n chem = %d,\n  maths = %d", marks[0],marks[1],marks[2]);

    return 0;
}