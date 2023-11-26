/*
Passing structure to function

Function prototype

void printInfo(struct student s1);
*/

#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];

};

void printInfo(struct student s1);          // always use this line after declaration ----after this struct student {....}

int main(){
    struct student s1 = {1664,6.7,"Shradha"};
    struct student s2 = {5678,8.9,"Rajdev"};
    printInfo(s1);
    printInfo(s2);

    return 0;
}

void printInfo(struct student s1){
    printf("Studet Information:\n");
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    printf("Student name = %s\n", s1.name);
    printf("\n");
}