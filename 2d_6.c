#include <stdio.h>
int main()


{
int n;
int multy=1;
scanf("%d", &n);
int vals[n][n];
for (int row = 0; row < n; row++)
{
for (int col = 0; col < n; col++){
     printf("Enter value for disp[%d][%d]:", row, col);
         scanf("%d",&vals[row][col]);
if(row==col || col==n-row){
multy*=vals[row][col];
printf("result %d ", multy); }


}
printf("\n");
}

return 0;

}

