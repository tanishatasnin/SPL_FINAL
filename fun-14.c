#include <stdio.h>
#include <math.h>

/*Function to return the digit of n-th position of num. Position starts from 0*/
int getdigit(int num, int n)
{
    int r;

    r = num / pow(10, n);

    r = r % 10;

    return r;
}

void main()
{
    int num = 0, pos;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a position: ");
    scanf("%d", &pos);

    printf("%dth digit of %d is %d.\n", pos, num, getdigit(num, pos));
}
