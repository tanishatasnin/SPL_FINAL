#include<stdio.h>
void func( int B[], int n);
int main(){
int A[5]={10, 20, 30, 40, 50};
int i;
for(i=4; i>=0; i--)
printf("%d ", A[i]);
func(A, 5);
printf("\n");
for(i=0; i<5; i++)
printf("%d ", A[i]);
return 0;
}
void func( int B[], int n){
int i;
for(i=0; i<n; i++)
B[i]= (B[i]+i)*(i+1);
return;
}

// result line 7 : 50 40 30 20 10
// line 11 : B[0]= (10+0) *(0+1)=10 ... i=0
// B[1]= (20+1) *(1+1)=42 ... i=1
// B[2]= (30+2) *(2+1)=96 ... i=2
// B[3]= (40+3) *(3+1)=172 ... i=3
//  B[4]= (50+4) *(4+1)=270 ... i=4
