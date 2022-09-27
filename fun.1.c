#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main(){
a=10;
b=20;
printf("a =%d b=%d\n", a, b);
a=func1(18.5);
func2(23, 16.8);
printf("a=%d b=%d\n", a, b);
return 0;
}
int func1(float x) {
b=b+a;
printf("%f\n", x);
return b;
}
void func2(int x, float y){
printf("%d %f\n", x, y);
return;
}


/*
a =10 b=20
18.500000
23 16.799999
a=30 b=30

*/
