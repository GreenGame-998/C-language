/*
Typedef Keyword:
used to create alias (like nickname) for data types 

typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;                  ---- coe is the nickname for the struct computerengineeringstudent

coe student1;              ---- calling of the function

*/

#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu ; 

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1 = {1344,9.6,"Rajdev"};
  

    printf("student name is %s\n",s1.name);
return 0;
}