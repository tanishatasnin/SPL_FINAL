
#include<stdio.h>
int num1, num2;
int f1(float x);
void f2(int x, float y);
int main(){
num1 = 1500 % 7;
num2 = f1(num1);
f2(12, 15.0);
printf("num1=%d num2= %d ",num1,num2);
return 0;
}
int f1(float x) {
num2 = x*num1;
return num2-1;
}
void f2(int num1, float num2){
num1 = num1+num2;
num2 = num1-num2;
printf("num1=%d num2=%f ",num1,num2);
}
//printf("num1=%d num2=%f ",num1,num2);
//num1=27 num2=12.000000
// num1=2 num2= 3
