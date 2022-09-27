#include<stdio.h>
int main(){
FILE *fp1;
int i;
char name[6]={'R', 'A', 'H', 'I', 'M', '\0'};
fp1= fopen("dest.txt", "w");
for(i=4; i>=0; i--){
putc(name[i], fp1);
putc("\n", fp1);
}
fclose(fp1);
return 0;
}
