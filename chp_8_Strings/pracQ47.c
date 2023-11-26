//Create a strings first name & last name to store details of user & print all the charcters using a loop.

// #include<stdio.h>
// int main(){
//     char firstname[]= "Rajdev";
//     char lastname[]= "Singh";

//     for(int i =0; firstname[i]!=0; i++){
//         printf("%c", firstname[i]);
//     }
//     printf("\t");

//     for(int i=0; lastname[i]!=0; i++){
//         printf("%c", lastname[i]);
//     }

// return 0;
// }


#include<stdio.h>
void printstring(char arr[]);

int main(){
    char firstname[]= "Rajdev";
    char lastname[]= "Singh";

    printstring(firstname);
    
    printstring(lastname);
    return 0;
}

void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\t");
   
}

