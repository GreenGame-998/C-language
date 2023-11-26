// Write a program to store the data of 3 students.

#include<stdio.h>
#include<string.h>

struct  student{
int roll;
char name[100];
float cgpa;
};

int main(){
    struct student s1;
    s1.roll = 5894;
    s1.cgpa = 78.98;
    strcpy(s1.name,"shradha");

    struct student s2;
    s2.roll = 5894;
    s2.cgpa = 78.98;
    strcpy(s2.name,"Aman");

    struct student s3;
    s3.roll = 5894;
    s3.cgpa = 78.98;
    strcpy(s3.name,"Rajdev");

    printf("Student name = %s\n",s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
    printf("\n");
    printf("Student name = %s\n",s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n",s2.cgpa);
    printf("\n");

    printf("Student name = %s\n",s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);

    return 0;
}
