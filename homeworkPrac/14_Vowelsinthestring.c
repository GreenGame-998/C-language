//Replace the data in the file of Q(a) with the number of vowels in the string.

#include <stdio.h>
int main(){
   FILE *rep;
   rep = fopen("p.txt","r");
   char vowels[100];
   char v;
    int vc= 0;
while(fscanf(rep,"%c",&v)!=EOF){
    if(v=='a'||v=='o'||v=='i'||v=='e'||v=='u'||
    v=='A'||v=='E'||v=='I'||v=='O'||v=='U'){
        vc++;
        vowels[vc]= v;
    }
}
fclose(rep);

rep = fopen("p.txt","w");
for(int i=0; i<=vc;i++){
    fprintf(rep,"%c",vowels[i]);
}
fclose(rep);
return 0;
}

