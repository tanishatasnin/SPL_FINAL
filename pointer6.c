#include<stdio.h>
void change (int *x, int *y, int z) {
*x=*x+10;
*y=*y+3;
z=z+5;
return;
}
int main(){
int a=500%5;
int b=500/5;



int c= 500;
printf("%d %d %d\n", a, b, c);
change(&a, &b, c);
printf("%d %d %d\n", a, b, c);
return 0;
}
//result
// 0 100 500
//10 103 500
