#include<stdio.h>
double cube(double x);
int main(){

double a, result ;
scanf("%lf",&a);

result =cube(a);
printf("result is :%lf",result);
return 0;
}
double cube(double x){

return x*x*x;
}
