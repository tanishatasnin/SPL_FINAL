#include<stdio.h>

void main(){
int a=500%7;
int num[10], sum=0;
for(int i=0; i<10; i++){
num[i] = 3*i + a;
}
for(int i=0; i<10; i++){
if(i%3 == 0){
printf("%d\n",*(num+i));
}
sum += *(num+i);
printf("sum: %d\n",sum);
}
sum /= 10;
printf("%d\n", sum);


}
