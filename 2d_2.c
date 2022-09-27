#include<stdio.h>
int main(){
int NUM_ROW = 3;
int NUM_COL = 4;
int max[3][4] = { {11, 12, 13, 14},
{21, 22, 23, 24},
{31, 32, 33, 34} };

// output the array
for (int row = 0; row < NUM_ROW; row++)
{
for (int col = 0; col < NUM_COL; col++)
{
printf("%d ", max[row][col]);
}
printf("\n");
}

}

