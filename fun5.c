#include<stdio.h>
int func(int x);
int main(){
printf("435=%d\n", func(435));
printf("89=%d", func(89));
return 0;
}
int func(int x){
if (x==0)
return 0;
else
return x%10+func(x/10);
}
