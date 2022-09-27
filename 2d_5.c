int main (){

int NUM_ROW = 3;
int NUM_COL = 4;
int max[3][4] = { {11, 12, 13, 14},
{21, 22, 23, 24},
{31, 32, 33, 34} };

// output the array
for (int j = 0; j < 4; j++)
{
for (int i = 0; i < 3; i++)
{
printf("%d ", max[i][j]);
}
printf("\n");
}
}
