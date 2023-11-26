/* Standard Library Functions
<string.h>
1. strlen(str)
count no. of char excluding '\0'.

2. Strcpy(newStr, oldStr)
copies value of old string to new string

3. strcat(firstStr, secStr)
concatenates first string with second string

4. strcmp(firstStr, secStr)
compares 2 strings & return a value
     0--> string equal
     positive-->first is greater than second(ASCII)
     negative-->first is smaller than second(ASCII)
*/
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[]= "Rajdev Sigh";
//     int length = strlen(name);
//     printf("No. of char is %d", length);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
// char oldstr[]= "oldstr";
// char newstr[]= "newstr";
// strcpy(newstr, oldstr);
// printf("%s", newstr);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
// char firstStr[100]= "Hello ";           // if we donot give a big size then after concatenates string cann't able to store it.
// char secStr[]= "world";
// strcat(firstStr,secStr);
// puts(firstStr);
// return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
char firststr[]= "HHHA";
char secondstr[]="HHHB";

printf("%d\n", strcmp(firststr,secondstr));         // depends upon ascii value

return 0;
}

