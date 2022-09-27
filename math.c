#include<stdio.h>

int main(){
add(5,5);
sub(5,5);
multy(5,5);
div(5,5);
}
int add(int a, int b){
   int addition=a+b;
    printf("%d\n",addition);
return addition;
}

int sub(int a, int b){
    int subi=a-b;
    printf("%d\n",subi);
return subi;
}

int multy(int a, int b){
    int multyplication=a*b;
     printf("%d\n",multyplication);
return multyplication;
}

int div(int a, int b){
    int divition=a/b;
     printf("%d\n",divition);
return divition;
}
