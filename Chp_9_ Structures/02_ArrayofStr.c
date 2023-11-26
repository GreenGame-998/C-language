/*
Arrays of Structures 

struct student ECE[100];
struct Student COE[100];
Struct Student IT[100];

 all above are in the format of datatypes-variable-quantity( struct student is the data type above )


ACCESS:
IT[0].roll = 200; ---- array name-index-properties that we want to access
IT[0].cgpa = 7.6;
*/

#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 2545;
    ece[0].cgpa = 8.77;
    strcpy(ece[0].name,"Rajdev");

printf("name = %s\n",ece[0].name);

    return 0;
}

 