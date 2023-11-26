/* Pointers to Structures
struct student s1;
struct student *ptr;
ptr = &s1;
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

    struct student *ptr = &s1;
    printf("student roll = %d\n",(*ptr).roll);
//   ARROW OPERATOR------- (*ptr).code  can also be written as ptr->code
    printf("student roll = %d\n",ptr->roll);
    printf("student cgpa = %f\n",ptr->cgpa);
    printf("student name = %s\n",ptr->name);
return 0 ;
}