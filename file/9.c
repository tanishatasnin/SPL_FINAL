
#include<stdio.h>
int main (){
FILE *file ;

int i , sum, a=1500;
int num[]={a,a%10,a%20,a%30,a%40};
file=fopen("test.txt","w");
fprintf(file,"%s\n","hello vaxxers!");

for(i=4; i>=0;i--){
    fprintf(file,"%d\n",num[i]);
}
fclose(file);

}

/*
hello vaxxers!
20
0
0
0
1500
*/
