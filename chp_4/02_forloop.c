#include<stdio.h>
int main(){
    
    for(int i=1;i<=5;i++){                      // i is called iterator ; counter
        printf("Hello world\n");
    }
    return 0;
}
/*
loop counter can be float or even character

for(float i=1.0; i<=5.0; i++){
    printf("%f\n",i);
}

for(char ch='a'; ch<='z'; ch++){
    printf("%c\n",ch);
}