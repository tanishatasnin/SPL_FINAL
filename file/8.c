#include<stdio.h>
void main(){
int sum=0, a = 1500%7, num[4];
FILE *fp= fopen("input.txt", "w");
fprintf(fp, "%s\n", "Good Morning");
for(int i=0;i<5;i++){
num[i] = 2*i + a;
fprintf(fp, "%d\n", num[i]); /*

2
4
6
8
10
 */
}
for(int i=0; i<4; i++){
sum += num[i];
fprintf(fp, "%d\n", num[i]);/*
2
4
6
8
*/
}
fprintf(fp, "%d", sum);
//20
fclose(fp);
}
