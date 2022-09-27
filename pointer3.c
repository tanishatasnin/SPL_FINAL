#include<stdio.h>
void change(int *x, int y){
*x=*x+11;
y=y*10;
//*y=*y*10;
return;
}
int main(){
int a=10; int b=20;
printf("%d %d\n", a, b);
change(&a, &b);
printf("%d %d\n", a, b);
return 0;
}
// result : 10 20
//21 200


//if we follow the line 4 then result will be 21 , 20 bcz y is not pointed by b .
