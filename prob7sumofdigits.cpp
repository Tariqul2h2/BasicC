#include<stdio.h>
int main()
{
    int i, num, rem = 0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem = rem+num%10;
        num = num/10;
    }
    printf("%d",rem);
}
