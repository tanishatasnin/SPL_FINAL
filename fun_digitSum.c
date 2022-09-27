#include<stdio.h>
int digitSum(int n );
int digitPosi(int id, int posi);
int main(){
int result,posi,id;
scanf("%d",&id);
result=digitSum(id) ;
posi=digitPosi(id,posi);
//printf("Sum is=%d\n",result);
//printf("%d digit position %d",id,posi);
}


int digitSum(int n ){

int sum , m ;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}

return sum;

}

int digitPosi(int id, int posi)
{
    int r=0, m;
    while(id!=0){
     r=r*10;
     r=r+id%10;
     id/=10;
printf("Reversed Number: %d\n",r,);
  }
//  for()
}
