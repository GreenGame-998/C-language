/*
    Multidimensional Arrays
    2 D Arrays
    int arr[][]= {(1,2),(3,4)}; --Declare

\\ Access
arr[0][0]       |1 2|
arr[0][1]       |3 4|
arr[1][0]
arr[1][1]
            --Visualize 2D arrays as matrix, firstly the first row will completly filled than the other

*/

#include <stdio.h>
int  main(){
    // int marks[2][3];

    // marks[0][0]= 89;
    // marks[0][1]=90;
    // marks[0][2]=78;

    // marks[1][0]= 67;
    // marks[1][1]=75;
    // marks[1][2]=62;  OR,

    int marks[2][3]= {89,90,78,67,75,62};

   

    for(int j=0;j<=2;j++){
        printf("marks are %d\n",marks[0][j]);
    }
    for(int j=0;j<=2;j++){
        printf("marks are %d\n",marks[1][j]);
    }
return 0;
}