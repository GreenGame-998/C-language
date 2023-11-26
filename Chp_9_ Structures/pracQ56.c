// Enter address (house no, block, city, state) of 5 people.

#include<stdio.h>
#include<string.h>
 
struct address{
    int HouseNum;
    int block;
    char city[100];
    char state[100];
};


int main(){
    struct address a1 = {78,98,"Santinagar","UP"};
    printf("The address of the person 1 is %d, %d, %s, %s\n", a1.HouseNum,a1.block,a1.city,a1.state);

    struct address a2 = {89,558,"Umeshwar","UP"};
    printf("The address of the person 2 is %d, %d, %s, %s\n", a2.HouseNum,a2.block,a2.city,a2.state);

    struct address a3= {998,9809,"kamta","MP"};
    printf("The address of the person 3 is %d, %d, %s, %s\n", a3.HouseNum,a3.block,a3.city,a3.state);

    struct address a4 = {888,998,"mahanagar","Uttrakhand"};
    printf("The address of the person 4 is %d, %d, %s, %s\n", a4.HouseNum,a4.block,a4.city,a4.state);

    struct address a5 = {1287,9876,"bhayanak","kerala"};
    printf("The address of the person 5 is %d, %d, %s, %s", a5.HouseNum,a5.block,a5.city,a5.state);


    
return 0;
}