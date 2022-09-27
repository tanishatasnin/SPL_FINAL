#include<stdio.h>
int digitMult(int a,int b , int c);
int main(){
int id, a,b,c,result ;
scanf("%d%d%d",&a,&b,&c);

result=digitMult(a,b,c);
printf("product of all the digits of the id= %d",result);
}

int digitMult(int a,int b , int c){
  return a*b*c;
}
