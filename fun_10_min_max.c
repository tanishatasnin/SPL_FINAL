#include<stdio.h>
int max(int x, int y );
int min(int x, int y );
int main(){

int num1, num2;
scanf("%d %d", &num1,&num2);

max(num1,num2);
printf("\n");
min(num1,num2);

}
 int max(int x, int y ){
 if(x>y){
    printf("Num1 is maximum ");
 }
 else {
    printf("num2 is maximum");
 }
 }


 int min(int x , int y){
 if(x>y){
    printf("Num2 is minimum ");
 }
 else {
    printf("num1 is manimum");
 }
 }
