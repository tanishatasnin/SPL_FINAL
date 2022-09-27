#include <stdio.h>
int main()


{
int n;
scanf("%d", &n);
int vals[n][n];
for (int row = 0; row < n; row++)
{
for (int col = 0; col < n; col++)
{if(row==col || col==n-row){

printf("%d ", vals[row][col]=1); }
else{
printf("%d ", vals[row][col]=0);
}

}
printf("\n");
}

return 0;

}
