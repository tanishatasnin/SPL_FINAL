
#include<stdio.h>
int main(){


char c[]="GATE2011";
char *p=c;
printf("p=%s\n",p);

printf("p+p[3]-p[1]=%s\n",p+p[3]-p[1]);


}
// p=GATE2011
// p+p[3]-p[1]=2011
