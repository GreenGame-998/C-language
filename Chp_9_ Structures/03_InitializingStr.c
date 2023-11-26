/* Initializing of Structures

    struct student s1 = {"shradha", 1664, 7.9};
    struct student s2 = {"rajat", 1552, 8.3};
    struct student s3 = {0};    ----this emplies that all the value are null values.
    */

#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1664,9.2,"shradha"};

    printf("student roll = %d\n",s1.roll);

return 0 ;
}