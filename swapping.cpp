#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
//    z = x;
//    x = y;
//    y = z;
    x ^= y ^= x ^= y;
    printf("X = %d\nY = %d", x,y);



}
