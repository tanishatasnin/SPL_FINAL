#include<stdio.h>
int main(){
FILE *fp1;
int i, sum;
int num[5]={0};
num[3]= 500%10;
num[0]= 500%100;
num[4]= 500%1000;
num[1]=num[0]+num[3];
num[2]=num[1]+num[4];
fp1= fopen("dest.txt", "w");
sum=0;
for(i=4; i>=0; i--){
if(num[i]%2==0){
sum=sum+num[i];
fprintf(fp1, " num[i]=%d\n", num[i]);
}
}
fprintf(fp1, "sum =%d", sum);
fclose(fp1);
return 0;
}

/*
500
0
500
0
0
1000 */
