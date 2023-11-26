// Make a structure to store Bank Account Information of a customer of ABC bank. Also, make an alias for it.

#include<stdio.h>
#include<string.h>

typedef struct  bank
{
char name[100];
int account;
} bk;

int main(){
    bk p1 = {"rajdev singh",897 };
    printf("Account holder name = %s and account number  = %d", p1.name, p1.account);
return 0;
}
