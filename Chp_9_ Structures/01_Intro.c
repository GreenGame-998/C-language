/*
Structures:
A collection of different data types
e.g.  for a student store the following:
name(string)
roll no(int)
cgpa(float)

Syntax
struct student{
    char name[100];
    int roll;
    float cgpa;
};

there are two types datatypes----inbuilt datatypes and user define datatypes
and structures fall into user define datatypes.

USES:
struct student s1;
s1.cgpa= 7.5;
s1.name= nhi;
s1.roll no= 45;

str are stores in the contiguous(adjacent) memory location

Benefits of Structures:
1. saves us from creating two many variables
2. Good data management and organisation

*/

#include<stdio.h>
#include<string.h>

// User defined
struct  student{
    int roll;
    float cgpa;
    char name[100];             // strings define by array notation
};

int main(){
    struct student s1;              // declare the variable s1.
    s1.roll = 264924;               // intialize the variable
    s1.cgpa = 9.2;
    // s.name = "shradha";          // this is the wrong syntax cuz string define by array notation can't be change(s.name != "shradha") but can copy(using strcpy)
    strcpy(s1.name, "shradha");

    printf("Student name = %s\n",s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);

    return 0;
}
