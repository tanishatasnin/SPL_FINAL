#include<stdio.h>
int digitSum(int n );
int main(){
int result,id;
scanf("%d",&id);
result=digitMulty(id) ;
printf("multy is=%d",result);

}


int digitMulty(int id ){

int multy , m ;
while(id>0)
{
m=id%10;
multy*=m;
id=id/10;
}

return multy;

}

