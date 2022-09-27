#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main(){
a=500%5;
b=500/5;
printf("%d %d\n", b, a);
a=func1(b+5.5);
func2(12, 15.0);
printf("%d %d\n", a, b);
return 0;
}
int func1(float x) {
b=b*a;
printf("%f\n", x);
func2(5, 4.5);
return b-1;
}
void func2(int x, float y){
printf("%d %f\n", x, y);
return;
}

/*
100 0
105.500000
5 4.500000
12 15.000000
-1 0

*/
