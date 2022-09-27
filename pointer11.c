#include<stdio.h>
int main(){


void printxy(int x, int y)
{
int *ptr;
x=0;
ptr=&x;
y=*ptr;
*ptr=1;
printf("%d %d",x,y);
}
}
