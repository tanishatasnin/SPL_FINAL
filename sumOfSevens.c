#include<stdio.h>
int main(){

 int result, arr[5];
 for(int i=0;i<5;i++){
     scanf("%d",&arr[i]) ;}
result=sumOfSevens();
printf("result");
return 0;
}

int sumOfSevens(int arr[5], int n){

    int sum;


for(int i=0;i<n;i++){
  if(arr[i]/7==0){
    sum+=arr[i];
  }

}
printf("sumosSEven is =%d",sum);
return sum;
}
