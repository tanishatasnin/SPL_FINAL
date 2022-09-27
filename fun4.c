#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main(){
a=11;
b=25;
printf("%d %d\n", a, b); // 11 25
a=func1(5.5);
func2(12, 15.0); //5 4.500000
printf("%d %d\n", a, b);  //36 36


return 0;
}
int func1(float x) {
b=b+a;
printf("%f\n", x); // 5.500000
func2(5, 4.5);

return b;
}
void func2(int x, float y){
printf("%d %f\n", x, y);  ////12 15.000000
return;
}

/*
11 25
5.500000
5 4.500000
12 15.000000
36 36
*/
