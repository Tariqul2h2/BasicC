#include<stdio.h>
int main()
{
    int n, l, i;
    scanf("%d",&n);
    for(i = 1; i <= n/2; i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
}
